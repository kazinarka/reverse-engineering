// Decompiled from G2E4eoenFMirpFKRfHNo2koDP7mrhnNWVwxyHASSpjQD
// Total functions: 138

// ============================================================
// Function: FUN_ram_00000120
// Address: ram:00000120
// Size: 288 bytes
// Called by: entrypoint
// Calls: FUN_ram_00016aa0, FUN_ram_000176d0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00000120(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((longlong)_DAT_ram_300000000 - 0x18U <= _DAT_ram_300000000) {
    uVar2 = (longlong)_DAT_ram_300000000 - 0x18U;
  }
  puVar1 = (undefined8 *)0x300007fe8;
  if (_DAT_ram_300000000 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(uVar2 & 0xfffffffffffffff8);
  }
  if (puVar1 < (undefined8 *)0x300000008) {
    param_1 = (undefined8 *)&DAT_ram_00000008;
    puVar1 = (undefined8 *)&DAT_ram_00000018;
    FUN_ram_000176d0();
  }
  _DAT_ram_300000000 = puVar1;
  puVar1[2] = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = *param_1;
  FUN_ram_00016aa0(0x15);
  return;
}



// ============================================================
// Function: FUN_ram_00000c60
// Address: ram:00000c60
// Size: 752 bytes
// Called by: entrypoint
// Calls: FUN_ram_0001e478
// ============================================================

undefined8 FUN_ram_00000c60(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  
  uVar4 = 0x1a;
  uVar8 = param_1[9];
  uVar6 = param_1[10];
  if (uVar8 < uVar6) {
    puVar10 = (undefined8 *)(param_1[7] + uVar8 * 0x38);
    puVar9 = (undefined8 *)(*param_1 + (uVar8 + param_1[4]) * 8);
    pcVar12 = (char *)((uVar8 + param_1[4]) * 0x10 + param_1[2] + 8);
    do {
      pbVar11 = *(byte **)*puVar9;
      iVar3 = FUN_ram_0001e478(pbVar11 + 8,*(undefined8 *)(pcVar12 + -8),0x20);
      uVar4 = 1;
      uVar8 = uVar8 + 1;
      uVar7 = uVar8;
      if (iVar3 != 0) break;
      bVar5 = 0;
      if (*pcVar12 == '\0') {
        bVar5 = 0x77;
      }
      if ((bVar5 | *pbVar11) != 0xff) {
        uVar4 = 0xb;
        break;
      }
      bVar5 = pbVar11[1];
      bVar1 = pbVar11[2];
      bVar2 = pbVar11[3];
      uVar4 = *(undefined8 *)(pbVar11 + 0x50);
      puVar10[4] = pbVar11 + 0x28;
      puVar10[3] = pbVar11 + 0x58;
      puVar10[2] = uVar4;
      puVar10[1] = pbVar11 + 0x48;
      *puVar10 = pbVar11 + 8;
      *(bool *)((longlong)puVar10 + 0x32) = bVar2 != 0;
      *(bool *)((longlong)puVar10 + 0x31) = bVar1 != 0;
      *(bool *)(puVar10 + 6) = bVar5 != 0;
      uVar4 = 0x1a;
      pcVar12 = pcVar12 + 0x10;
      puVar9 = puVar9 + 1;
      puVar10[5] = 0;
      puVar10 = puVar10 + 7;
      uVar7 = uVar6;
    } while (uVar8 < uVar6);
    param_1[9] = uVar7;
  }
  return uVar4;
}



// ============================================================
// Function: FUN_ram_00001340
// Address: ram:00001340
// Size: 840 bytes
// Called by: FUN_ram_00001688, FUN_ram_000017c0
// Calls: FUN_ram_0001e430
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00001340(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2;
  if (param_4[1] == 0) {
    if (param_3 == 0) goto LAB_ram_00001588;
    uVar1 = 0x300008000;
    if (_DAT_ram_300000000 != 0) {
      uVar1 = _DAT_ram_300000000;
    }
    uVar2 = 0;
    if (uVar1 - param_3 <= uVar1) {
      uVar2 = uVar1 - param_3;
    }
    uVar2 = uVar2 & -param_2;
  }
  else {
    if (param_4[2] != 0) {
      uVar1 = 0x300008000;
      if (_DAT_ram_300000000 != 0) {
        uVar1 = _DAT_ram_300000000;
      }
      uVar2 = 0;
      if (uVar1 - param_3 <= uVar1) {
        uVar2 = uVar1 - param_3;
      }
      uVar2 = uVar2 & -param_2;
      uVar1 = 0;
      if (0x300000007 < uVar2) {
        _DAT_ram_300000000 = uVar2;
        FUN_ram_0001e430(uVar2,*param_4,param_4[2]);
        uVar1 = uVar2;
      }
      goto LAB_ram_00001588;
    }
    if (param_3 == 0) goto LAB_ram_00001588;
    uVar1 = 0x300008000;
    if (_DAT_ram_300000000 != 0) {
      uVar1 = _DAT_ram_300000000;
    }
    uVar2 = 0;
    if (uVar1 - param_3 <= uVar1) {
      uVar2 = uVar1 - param_3;
    }
    uVar2 = uVar2 & -param_2;
  }
  uVar1 = 0;
  if (0x300000007 < uVar2) {
    uVar1 = uVar2;
    _DAT_ram_300000000 = uVar2;
  }
LAB_ram_00001588:
  param_1[2] = param_3;
  if (uVar1 != 0) {
    param_2 = uVar1;
  }
  param_1[1] = param_2;
  *param_1 = (ulonglong)(uVar1 == 0);
  return;
}



// ============================================================
// Function: FUN_ram_00001688
// Address: ram:00001688
// Size: 312 bytes
// Called by: entrypoint
// Calls: FUN_ram_00001340, FUN_ram_000176b0
// ============================================================

void FUN_ram_00001688(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_R6;
  ulonglong *unaff_R7;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar2 = *param_1;
  uVar1 = 0;
  if (uVar2 != 0xffffffffffffffff) {
    param_2 = uVar2 + 1;
    unaff_R6 = uVar2 << 1;
    if (uVar2 << 1 <= param_2) {
      unaff_R6 = param_2;
    }
    if (unaff_R6 < 9) {
      unaff_R6 = 8;
    }
    if (-1 < (longlong)unaff_R6) {
      if (uVar2 != 0) {
        local_18 = param_1[1];
        local_8 = uVar2;
      }
      local_10 = (ulonglong)(uVar2 != 0);
      FUN_ram_00001340(&local_30,1,unaff_R6,&local_18);
      param_2 = local_20;
      uVar1 = local_28;
      unaff_R7 = param_1;
      if (local_30 != 1) goto LAB_ram_000017a0;
    }
  }
  param_1 = unaff_R7;
  FUN_ram_000176b0(uVar1,param_2,&DAT_ram_00023ed8);
LAB_ram_000017a0:
  *param_1 = unaff_R6;
  param_1[1] = local_28;
  return;
}



// ============================================================
// Function: FUN_ram_000017c0
// Address: ram:000017c0
// Size: 360 bytes
// Called by: entrypoint
// Calls: FUN_ram_00001340, FUN_ram_000176b0
// ============================================================

void FUN_ram_000017c0(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R6;
  ulonglong *unaff_R7;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar3 = param_2 + param_3;
  uVar2 = 0;
  if (param_2 <= uVar3) {
    uVar1 = *param_1;
    unaff_R6 = uVar1 << 1;
    if (uVar1 << 1 <= param_3 + param_2) {
      unaff_R6 = param_3 + param_2;
    }
    if (unaff_R6 < 9) {
      unaff_R6 = 8;
    }
    if (-1 < (longlong)unaff_R6) {
      if (uVar1 != 0) {
        local_18 = param_1[1];
        local_8 = uVar1;
      }
      local_10 = (ulonglong)(uVar1 != 0);
      FUN_ram_00001340(&local_30,1,unaff_R6,&local_18);
      uVar2 = local_28;
      uVar3 = local_20;
      unaff_R7 = param_1;
      if (local_30 != 1) goto LAB_ram_00001908;
    }
  }
  param_1 = unaff_R7;
  FUN_ram_000176b0(uVar2,uVar3,&DAT_ram_00023ef0);
LAB_ram_00001908:
  *param_1 = unaff_R6;
  param_1[1] = local_28;
  return;
}



// ============================================================
// Function: FUN_ram_00001ff0
// Address: ram:00001ff0
// Size: 888 bytes
// Called by: entrypoint
// Calls: FUN_ram_0001e478, sol_invoke_signed_c
// ============================================================

undefined8
FUN_ram_00001ff0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  char *pcVar2;
  char *local_c8;
  undefined2 local_c0;
  char *local_b8;
  undefined2 local_b0;
  undefined1 local_a4;
  undefined2 local_a3;
  undefined1 local_a1;
  ulonglong local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined *local_28;
  char **local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  pcVar2 = (char *)*param_1;
  iVar1 = FUN_ram_0001e478(pcVar2 + 0x28,&DAT_ram_00020a80,0x20);
  if (iVar1 != 0) {
    param_4 = param_4 + 0xdab88;
  }
  local_80 = (char *)*param_2;
  local_a0 = param_4;
  if (*(ulonglong *)(local_80 + 0x48) <= param_4) {
    local_a0 = *(ulonglong *)(local_80 + 0x48);
  }
  local_b8 = pcVar2 + 8;
  local_c8 = local_80 + 8;
  local_b0 = 1;
  local_c0 = 0x101;
  local_a1 = 0;
  local_a3 = 0;
  local_a4 = 2;
  if (*local_80 == -1) {
    local_68 = local_80[1] != '\0';
    local_67 = local_80[2] != '\0';
    local_90 = local_80 + 0x48;
    local_66 = local_80[3] != '\0';
    local_88 = *(undefined8 *)(local_80 + 0x50);
    local_78 = local_80 + 0x28;
    local_80 = local_80 + 0x58;
    local_70 = 0;
    if (*pcVar2 == -1) {
      local_50 = *(undefined8 *)(pcVar2 + 0x50);
      local_48 = pcVar2 + 0x58;
      local_58 = pcVar2 + 0x48;
      local_2e = pcVar2[3] != '\0';
      local_2f = pcVar2[2] != '\0';
      local_30 = pcVar2[1] != '\0';
      local_38 = 0;
      local_10 = &local_a4;
      local_20 = &local_c8;
      local_28 = &DAT_ram_00020a40;
      local_8 = 0xc;
      local_18 = 2;
      local_98 = local_c8;
      local_60 = local_b8;
      local_40 = pcVar2 + 0x28;
      sol_invoke_signed_c(&local_28,&local_98,2,8,0);
      return 0x1a;
    }
  }
  return 0xb;
}



// ============================================================
// Function: FUN_ram_00002368
// Address: ram:00002368
// Size: 856 bytes
// Called by: entrypoint
// Calls: FUN_ram_0001ffb8, FUN_ram_00020890, FUN_ram_0001d070, FUN_ram_0001e478, FUN_ram_00017f90, FUN_ram_0001ba98, FUN_ram_000026c0
// ============================================================

void FUN_ram_00002368(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                     longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined *local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_28 = *(undefined8 *)(param_5 + -0xfd8);
  local_30 = *(undefined8 *)(param_5 + -0xfe0);
  FUN_ram_000026c0(&local_20,param_2,param_3,&local_30);
  if (local_18 != (undefined *)0x0) {
    lVar2 = *(longlong *)(local_18 + 8);
    puVar6 = local_18;
    if (*(ulonglong *)(lVar2 + 0x50) < 0x20) {
      lVar2 = 0x20;
      puVar6 = &DAT_ram_000241f8;
      FUN_ram_0001ba98(0x20);
    }
    uVar4 = *(ulonglong *)(param_5 + -0xfe8);
    uVar5 = *(ulonglong *)(param_5 + -0xff0);
    uVar8 = *(ulonglong *)(param_5 + -0xff8);
    uVar9 = *(ulonglong *)(param_5 + -0x1000);
    uVar7 = CONCAT44(uStack_1c,local_20);
    iVar1 = FUN_ram_0001e478(lVar2 + 0x58,&DAT_ram_00020b60,0x20);
    if (iVar1 == 0) {
      if ((param_4 & 1) == 0) {
        FUN_ram_00017f90(&DAT_ram_000241b0);
        goto LAB_ram_00002528;
      }
      uVar9 = uVar9 & 0xffffffff;
      if (uVar9 == 0) {
        FUN_ram_0001d070(&DAT_ram_000241c8);
      }
      FUN_ram_0001ffb8(&local_40,uVar7,0,1000000000,0);
      FUN_ram_00020890(local_50,local_40,local_38,uVar9,0);
      uVar7 = local_50[0];
    }
    if (((uVar8 & 1) == 0) &&
       (puVar3 = (undefined *)(uVar7 * (uVar4 & 0xff)), uVar5 = (ulonglong)puVar3 / 100,
       puVar3 < &UNK_ram_00018704)) {
      uVar5 = 1000;
    }
    uStack_1c = 0x1772;
    local_20 = 0;
    if (uVar5 < uVar7) {
      param_1[5] = uVar5;
      param_1[4] = local_8;
      param_1[3] = local_10;
      param_1[2] = puVar6;
      param_1[1] = local_28;
      *param_1 = local_30;
      return;
    }
  }
LAB_ram_00002528:
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
  *(undefined4 *)(param_1 + 1) = local_20;
  *param_1 = 0;
  return;
}



// ============================================================
// Function: FUN_ram_000026c0
// Address: ram:000026c0
// Size: 11608 bytes
// Called by: FUN_ram_00002368, entrypoint
// Calls: FUN_ram_00007c80, sol_memcpy_, FUN_ram_00005fe8, FUN_ram_00018308, FUN_ram_0001e430, FUN_ram_0001ba98, FUN_ram_00006e00, FUN_ram_00006b48, FUN_ram_00005d20, FUN_ram_00007858
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_000026c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                     longlong param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  int in_R0;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined8 uVar29;
  longlong *plVar30;
  longlong *plVar31;
  longlong *local_6c8;
  longlong local_688;
  ulonglong local_670;
  ulonglong local_668;
  char *local_658;
  longlong local_650;
  longlong *local_648;
  longlong *local_640;
  ulonglong local_638;
  undefined1 *local_630;
  undefined8 local_628;
  undefined1 local_620;
  undefined1 local_61f;
  undefined1 local_61e;
  undefined4 local_61d;
  undefined2 local_619;
  undefined8 local_610;
  undefined8 local_608;
  byte abStack_5fd [316];
  undefined1 uStack_4c1;
  undefined8 local_4c0;
  longlong local_4b8 [5];
  undefined1 auStack_490 [8];
  char local_488;
  undefined1 local_3f9;
  ulonglong local_3f8;
  char local_116;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined1 local_20;
  undefined7 uStack_1f;
  undefined1 local_18;
  undefined7 uStack_17;
  longlong **local_10;
  undefined8 local_8;
  
  local_650 = *(longlong *)(param_5 + -0xff8);
  local_658 = *(char **)(param_5 + -0x1000);
  uVar12 = (ulonglong)param_2 & 0xff;
  lVar20 = *param_4;
  uVar16 = param_4[1];
  local_688 = lVar20;
  if (uVar16 <= uVar12) {
    local_688 = 0;
  }
  uVar23 = 10;
  if (uVar12 < uVar16) {
    param_4[1] = uVar16 - (uVar12 + 1);
    *param_4 = lVar20 + (uVar12 + 1) * 8;
    lVar13 = *(longlong *)(lVar20 + 8);
    uVar17 = *(ulonglong *)(lVar13 + 0x50);
    if (0x47 < uVar17) goto LAB_ram_00002880;
LAB_ram_00002860:
    do {
      lVar13 = 0x48;
      FUN_ram_0001ba98(0x48,uVar17,&DAT_ram_000241e0);
LAB_ram_00002880:
      plVar14 = *(longlong **)(lVar13 + 0x98);
      sol_log_compute_units_();
      param_2 = (longlong *)((ulonglong)param_2 & 0xff);
      if (param_2 != (longlong *)0x0) {
        local_6c8 = plVar14;
        if (param_3 <= plVar14) {
          local_6c8 = param_3;
        }
        uVar25 = 0;
LAB_ram_000029d0:
        uVar21 = uVar25 + 1;
        lVar13 = 1;
        if (uVar21 != uVar12) {
          lVar13 = (uVar21 & 0xff) + 1;
        }
        plVar22 = (longlong *)(local_688 + lVar13 * 8);
        param_3 = (longlong *)*plVar22;
        uVar17 = param_3[10];
        if (uVar17 < 0x48) goto LAB_ram_00002860;
        in_R0 = 0x1773;
        uVar23 = 0;
        uVar17 = param_4[1];
        if (uVar17 == 0) goto LAB_ram_000052c0;
        plVar15 = (longlong *)param_3[0x13];
        uVar18 = uVar17 - 1;
        plVar30 = (longlong *)*param_4;
        lVar13 = *plVar30;
        param_4[1] = uVar18;
        param_2 = plVar30 + 1;
        *param_4 = (longlong)param_2;
        plVar26 = (longlong *)(lVar13 + 8);
        iVar10 = FUN_ram_0001e478(plVar26,&DAT_ram_00021208,0x20);
        uVar6 = uStack_27;
        uVar4 = local_28;
        local_28 = SUB81(plVar26,0);
        uVar5 = local_28;
        uStack_27 = (undefined7)((ulonglong)plVar26 >> 8);
        uVar7 = uStack_27;
        local_28 = uVar4;
        uStack_27 = uVar6;
        if (((iVar10 == 0) ||
            (iVar10 = FUN_ram_0001e478(plVar26,&DAT_ram_00020920,0x20), iVar10 == 0)) ||
           (iVar10 = FUN_ram_0001e478(plVar26,&DAT_ram_000209e0,0x20), plVar27 = plVar26,
           iVar10 == 0)) {
          iVar10 = FUN_ram_0001e478(*(longlong *)(local_688 + uVar21 * 8) + 0x28,&DAT_ram_00020b20,
                                    0x20);
          if ((iVar10 != 0) &&
             (iVar10 = FUN_ram_0001e478(param_3 + 5,&DAT_ram_00020b20,0x20), iVar10 != 0)) {
            in_R0 = 0x1773;
            if ((uVar17 < 0xc) || ((uVar18 & 0x1fffffffffffffff) == 10)) goto LAB_ram_000052c0;
            lVar13 = 0;
            plVar27 = plVar30 + 0xc;
            lVar28 = uVar17 * 8 + -0x58;
LAB_ram_00002d20:
            uVar19 = *(ulonglong *)(plVar27[-1] + 0x50);
            if (7 < uVar19) {
              if (*(longlong *)(plVar27[-1] + 0x58) != -0x66747f9e24db69c4) goto code_r0x00002cf0;
              uVar19 = lVar13 + 0xbU;
              if (uVar18 < lVar13 + 0xbU) {
                lVar13 = lVar13 + 0xb;
                FUN_ram_0001ba98(lVar13,uVar18,&DAT_ram_00024210);
                uVar19 = uVar18;
              }
              local_668 = uVar19;
              if (0x10 < uVar19) {
                local_668 = 0x11;
              }
              lVar11 = 0;
              uVar18 = 0;
              lVar28 = (longlong)&local_608 + 1;
              do {
                lVar24 = *param_2;
                bVar1 = *(char *)(lVar24 + 1) != '\0';
                bVar2 = *(char *)(lVar24 + 2) != '\0';
                cVar3 = *(char *)(lVar24 + 3);
                uVar29 = *(undefined8 *)(lVar24 + 0x50);
                *(longlong *)((longlong)local_4b8 + lVar11 + 0x18) = lVar24 + 0x28;
                *(longlong *)((longlong)local_4b8 + lVar11 + 0x10) = lVar24 + 0x58;
                *(undefined8 *)((longlong)local_4b8 + lVar11 + 8) = uVar29;
                *(longlong *)((longlong)local_4b8 + lVar11) = lVar24 + 0x48;
                auStack_490[lVar11 + 2] = cVar3 != '\0';
                param_3 = (longlong *)(lVar24 + 8);
                *(longlong **)((longlong)&local_4c0 + lVar11) = param_3;
                auStack_490[lVar11 + 1] = bVar2;
                auStack_490[lVar11] = bVar1;
                *(undefined8 *)((longlong)local_4b8 + lVar11 + 0x20) = 0;
                *(bool *)lVar28 = bVar1;
                *(bool *)(lVar28 + -1) = bVar2;
                *(longlong **)(lVar28 + -9) = param_3;
                lVar28 = lVar28 + 0x10;
                param_2 = param_2 + 1;
                lVar11 = lVar11 + 0x38;
                uVar18 = uVar18 + 1;
              } while (uVar18 < local_668);
              local_640 = local_6c8;
              local_648 = (longlong *)0xc88775e1919ec6f8;
              local_628 = 0;
              local_630 = (undefined1 *)0x0;
              local_638 = 0;
              local_620 = 1;
              local_10 = &local_648;
              local_20 = SUB81(&local_610,0);
              uStack_1f = (undefined7)((ulonglong)&local_610 >> 8);
              local_18 = (undefined1)uVar19;
              uStack_17 = (undefined7)(uVar19 >> 8);
              local_8 = 0x29;
              local_28 = uVar5;
              uStack_27 = uVar7;
              sol_invoke_signed_c(&local_28,&local_4c0,uVar19,8,0);
              param_4[1] = (uVar17 - lVar13) + -0xc;
              goto LAB_ram_00004ca8;
            }
            FUN_ram_0001ba98(8,uVar19,&DAT_ram_00024228);
          }
          uVar23 = 0;
          in_R0 = 0x1773;
          if ((uVar17 < 0x10) || ((uVar18 & 0x1fffffffffffffff) == 0xe)) goto LAB_ram_000052c0;
          lVar13 = 0;
          param_3 = plVar30 + 0x10;
          plVar27 = (longlong *)(uVar17 * 8 + -0x78);
LAB_ram_00002e20:
          uVar19 = *(ulonglong *)(param_3[-1] + 0x50);
          if (7 < uVar19) {
            if (*(longlong *)(param_3[-1] + 0x58) != -0x66747f9e24db69c4) goto code_r0x00002df0;
            uVar19 = lVar13 + 0xfU;
            if (uVar18 < lVar13 + 0xfU) {
              lVar13 = lVar13 + 0xf;
              FUN_ram_0001ba98(lVar13,uVar18,&DAT_ram_00024240);
              uVar19 = uVar18;
            }
            local_668 = uVar19;
            if (0x14 < uVar19) {
              local_668 = 0x15;
            }
            lVar11 = 0;
            uVar18 = 0;
            lVar28 = (longlong)&local_608 + 1;
            do {
              lVar24 = *param_2;
              bVar1 = *(char *)(lVar24 + 1) != '\0';
              bVar2 = *(char *)(lVar24 + 2) != '\0';
              cVar3 = *(char *)(lVar24 + 3);
              uVar29 = *(undefined8 *)(lVar24 + 0x50);
              *(longlong *)((longlong)local_4b8 + lVar11 + 0x18) = lVar24 + 0x28;
              *(longlong *)((longlong)local_4b8 + lVar11 + 0x10) = lVar24 + 0x58;
              *(undefined8 *)((longlong)local_4b8 + lVar11 + 8) = uVar29;
              *(longlong *)((longlong)local_4b8 + lVar11) = lVar24 + 0x48;
              auStack_490[lVar11 + 2] = cVar3 != '\0';
              *(longlong *)((longlong)&local_4c0 + lVar11) = lVar24 + 8;
              auStack_490[lVar11 + 1] = bVar2;
              auStack_490[lVar11] = bVar1;
              *(undefined8 *)((longlong)local_4b8 + lVar11 + 0x20) = 0;
              *(bool *)lVar28 = bVar1;
              *(bool *)(lVar28 + -1) = bVar2;
              *(longlong *)(lVar28 + -9) = lVar24 + 8;
              lVar28 = lVar28 + 0x10;
              param_2 = param_2 + 1;
              lVar11 = lVar11 + 0x38;
              uVar18 = uVar18 + 1;
            } while (uVar18 < local_668);
            iVar10 = FUN_ram_0001e478(plVar30[3] + 0xa1,plVar30[0xc] + 8,0x20);
            local_640 = local_6c8;
            local_648 = (longlong *)0x621ec91a0bed042b;
            local_630 = (undefined1 *)0x100013b51;
            if (iVar10 != 0) {
              local_630 = (undefined1 *)0x845c1aa94e69579a;
            }
            local_628 = 0;
            if (iVar10 != 0) {
              local_628 = 0xfffec4b1;
            }
            local_620 = 1;
            local_638 = 0;
            local_10 = &local_648;
            local_20 = SUB81(&local_610,0);
            uStack_1f = (undefined7)((ulonglong)&local_610 >> 8);
            local_18 = (undefined1)uVar19;
            uStack_17 = (undefined7)(uVar19 >> 8);
            local_8 = 0x29;
            local_28 = uVar5;
            uStack_27 = uVar7;
            sol_invoke_signed_c(&local_28,&local_4c0,uVar19,8,0);
            param_4[1] = (uVar17 - lVar13) + -0x10;
            *param_4 = (longlong)param_3;
            goto LAB_ram_00004cb0;
          }
          FUN_ram_0001ba98(8,uVar19,&DAT_ram_00024258);
        }
        uVar23 = 0;
        iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_000211e8,0x20);
        uVar6 = uStack_1f;
        uVar4 = local_20;
        local_20 = SUB81(local_6c8,0);
        uVar8 = local_20;
        uStack_1f = (undefined7)((ulonglong)local_6c8 >> 8);
        uVar9 = uStack_1f;
        if (iVar10 == 0) {
          in_R0 = 0x1773;
          if (uVar17 < 0xe) goto LAB_ram_000052c0;
          lVar28 = 0;
          lVar13 = (longlong)&local_608 + 1;
          do {
            lVar11 = *param_2;
            bVar1 = *(char *)(lVar11 + 1) != '\0';
            bVar2 = *(char *)(lVar11 + 2) != '\0';
            cVar3 = *(char *)(lVar11 + 3);
            uVar29 = *(undefined8 *)(lVar11 + 0x50);
            *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
            *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
            *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
            param_3 = (longlong *)(lVar11 + 0x48);
            *(longlong **)((longlong)local_4b8 + lVar28) = param_3;
            auStack_490[lVar28 + 2] = cVar3 != '\0';
            *(longlong *)((longlong)&local_4c0 + lVar28) = lVar11 + 8;
            auStack_490[lVar28 + 1] = bVar2;
            auStack_490[lVar28] = bVar1;
            *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
            *(bool *)lVar13 = bVar1;
            *(bool *)(lVar13 + -1) = bVar2;
            *(longlong *)(lVar13 + -9) = lVar11 + 8;
            lVar13 = lVar13 + 0x10;
            param_2 = param_2 + 1;
            lVar28 = lVar28 + 0x38;
          } while (lVar28 != 0x2d8);
          local_28 = 0x8f;
          uStack_27 = 0xde331ec4da5abe;
          local_18 = 0;
          uStack_17 = 0;
          local_630 = &local_28;
          local_640 = &local_610;
          local_628 = 0x18;
          local_638 = 0xd;
          local_648 = plVar26;
          sol_invoke_signed_c(&local_648,&local_4c0,0xd,8,0);
          param_4[1] = uVar17 - 0xe;
          plVar27 = plVar30 + 0xe;
LAB_ram_00004ca8:
          *param_4 = (longlong)plVar27;
        }
        else {
          local_20 = uVar4;
          uStack_1f = uVar6;
          iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00021228,0x20);
          if (iVar10 == 0) {
            in_R0 = 0x1777;
            if (local_650 != 0) {
              local_670 = 0xe;
              if (*local_658 != '\0') {
                local_670 = 0xf;
              }
              local_650 = local_650 + -1;
              local_658 = local_658 + 1;
              in_R0 = 0x1773;
              if (local_670 <= uVar18) {
                lVar28 = 0;
                uVar17 = 0;
                lVar13 = (longlong)&local_608 + 1;
                plVar30 = param_2;
                do {
                  lVar11 = *plVar30;
                  bVar1 = *(char *)(lVar11 + 1) != '\0';
                  bVar2 = *(char *)(lVar11 + 2) != '\0';
                  cVar3 = *(char *)(lVar11 + 3);
                  plVar31 = (longlong *)((longlong)&local_4c0 + lVar28);
                  uVar29 = *(undefined8 *)(lVar11 + 0x50);
                  *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
                  *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
                  *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
                  *(longlong *)((longlong)local_4b8 + lVar28) = lVar11 + 0x48;
                  auStack_490[lVar28 + 2] = cVar3 != '\0';
                  *plVar31 = lVar11 + 8;
                  auStack_490[lVar28 + 1] = bVar2;
                  auStack_490[lVar28] = bVar1;
                  *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
                  *(bool *)lVar13 = bVar1;
                  *(bool *)(lVar13 + -1) = bVar2;
                  *(longlong *)(lVar13 + -9) = lVar11 + 8;
                  lVar13 = lVar13 + 0x10;
                  plVar30 = plVar30 + 1;
                  lVar28 = lVar28 + 0x38;
                  uVar17 = uVar17 + 1;
                } while (uVar17 < local_670);
LAB_ram_00004bb0:
                local_28 = 0xf8;
                uStack_27 = 0xc88775e1919ec6;
                local_18 = 0;
                uStack_17 = 0;
                local_630 = &local_28;
                local_640 = &local_610;
                local_638 = local_670;
                local_628 = 0x18;
                local_648 = plVar26;
                local_20 = uVar8;
                uStack_1f = uVar9;
                sol_invoke_signed_c(&local_648,&local_4c0,local_670,8,0);
                param_4[1] = uVar18 - local_670;
                param_3 = (longlong *)(local_670 * 8);
                plVar27 = param_2 + local_670;
                param_2 = plVar31;
                goto LAB_ram_00004ca8;
              }
            }
            goto LAB_ram_000052c0;
          }
          iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_000211c8,0x20);
          if (iVar10 == 0) {
            in_R0 = 0x1773;
            if (0x10 < uVar17) {
              uVar18 = *(ulonglong *)(local_688 + uVar21 * 8);
              uVar19 = *(ulonglong *)(uVar18 + 0x50);
              plVar26 = plVar30;
              if (uVar19 < 0x20) {
                FUN_ram_0001ba98(0x20,uVar19,&DAT_ram_000241f8);
                uVar18 = uVar19;
              }
              lVar13 = plVar26[5];
              uVar19 = *(ulonglong *)(lVar13 + 0x50);
              if (uVar19 < 0x85) {
                lVar13 = 0x85;
                FUN_ram_0001ba98(0x85,uVar19,&DAT_ram_00024270);
                uVar18 = uVar19;
              }
              iVar10 = FUN_ram_0001e478(lVar13 + 0xbd,uVar18 + 0x58,0x20);
              lVar28 = 0;
              lVar13 = (longlong)&local_608 + 1;
              do {
                lVar11 = *param_2;
                bVar1 = *(char *)(lVar11 + 1) != '\0';
                bVar2 = *(char *)(lVar11 + 2) != '\0';
                cVar3 = *(char *)(lVar11 + 3);
                param_3 = (longlong *)((longlong)&local_4c0 + lVar28);
                uVar29 = *(undefined8 *)(lVar11 + 0x50);
                *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
                *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
                *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
                *(longlong *)((longlong)local_4b8 + lVar28) = lVar11 + 0x48;
                auStack_490[lVar28 + 2] = cVar3 != '\0';
                *param_3 = lVar11 + 8;
                auStack_490[lVar28 + 1] = bVar2;
                auStack_490[lVar28] = bVar1;
                *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
                *(bool *)lVar13 = bVar1;
                *(bool *)(lVar13 + -1) = bVar2;
                *(longlong *)(lVar13 + -9) = lVar11 + 8;
                lVar13 = lVar13 + 0x10;
                param_2 = param_2 + 1;
                lVar28 = lVar28 + 0x38;
              } while (lVar28 != 0x380);
              local_630 = (undefined1 *)0x100013b50;
              if (iVar10 != 0) {
                local_630 = (undefined1 *)0x35bb7f32a81b33af;
              }
              local_640 = local_6c8;
              local_648 = (longlong *)0x621ec91a0bed042b;
              local_628 = 0;
              if (iVar10 != 0) {
                local_628 = 0xfffec4b1;
              }
              local_61f = iVar10 == 0;
              local_619 = 0x106;
              local_61d = 1;
              local_61e = 1;
              local_620 = 1;
              local_638 = 0;
              local_10 = &local_648;
              local_20 = SUB81(&local_610,0);
              uStack_1f = (undefined7)((ulonglong)&local_610 >> 8);
              local_8 = 0x31;
              local_18 = 0x10;
              uStack_17 = 0;
              local_28 = uVar5;
              uStack_27 = uVar7;
              sol_invoke_signed_c(&local_28,&local_4c0,0x10,8,0);
              param_4[1] = uVar17 - 0x11;
              plVar27 = plVar30 + 0x11;
              goto LAB_ram_00004ca8;
            }
            goto LAB_ram_000052c0;
          }
          iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020ba0,0x20);
          if (iVar10 == 0) {
            in_R0 = FUN_ram_00005620(plVar27,param_4,local_6c8,
                                     *(undefined8 *)(local_688 + uVar21 * 8),&local_658);
          }
          else {
            iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020b80,0x20);
            if (iVar10 == 0) {
              in_R0 = 0x1773;
              if (uVar17 < 0x12) goto LAB_ram_000052c0;
              uVar17 = 0x11;
              if (uVar18 == 0x11) {
LAB_ram_000043f0:
                uVar19 = uVar17;
                if (uVar18 < uVar17) {
                  FUN_ram_0001ba98(uVar17,uVar18,&DAT_ram_000242e8);
LAB_ram_000053a8:
                  local_608 = local_4b8[0];
                  local_610 = CONCAT26(local_4c0._6_2_,
                                       CONCAT15(local_4c0._5_1_,
                                                CONCAT14(local_4c0._4_1_,(undefined4)local_4c0)));
                    /* WARNING: Subroutine does not return */
                  FUN_ram_00018308(&DAT_ram_00021184,0x2b,&local_610,&DAT_ram_00024300,
                                   &DAT_ram_00024320);
                }
              }
              else {
                plVar30 = plVar30 + 0x12;
                do {
                  if ((*(ulonglong *)(*plVar30 + 0x50) < 8) ||
                     (*(longlong *)(*plVar30 + 0x58) != -0x4ab96bfa23a371a4)) goto LAB_ram_000043f0;
                  plVar30 = plVar30 + 1;
                  uVar17 = uVar17 + 1;
                  uVar19 = uVar18;
                } while (uVar17 < uVar18);
              }
              local_670 = uVar19;
              if (0x13 < uVar19) {
                local_670 = 0x14;
              }
              lVar28 = 0;
              uVar17 = 0;
              lVar13 = (longlong)&local_608 + 1;
              plVar30 = param_2;
              do {
                lVar11 = *plVar30;
                bVar1 = *(char *)(lVar11 + 1) != '\0';
                bVar2 = *(char *)(lVar11 + 2) != '\0';
                cVar3 = *(char *)(lVar11 + 3);
                plVar31 = (longlong *)((longlong)&local_4c0 + lVar28);
                uVar29 = *(undefined8 *)(lVar11 + 0x50);
                *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
                *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
                *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
                *(longlong *)((longlong)local_4b8 + lVar28) = lVar11 + 0x48;
                auStack_490[lVar28 + 2] = cVar3 != '\0';
                param_3 = (longlong *)(lVar11 + 8);
                *plVar31 = (longlong)param_3;
                auStack_490[lVar28 + 1] = bVar2;
                auStack_490[lVar28] = bVar1;
                *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
                *(bool *)lVar13 = bVar1;
                *(bool *)(lVar13 + -1) = bVar2;
                *(longlong **)(lVar13 + -9) = param_3;
                lVar13 = lVar13 + 0x10;
                plVar30 = plVar30 + 1;
                lVar28 = lVar28 + 0x38;
                uVar17 = uVar17 + 1;
              } while (uVar17 < local_670);
              local_28 = 0x41;
              uStack_27 = 0x885b5beb4c3f4b;
              local_10 = (longlong **)((ulonglong)local_10 & 0xffffffff00000000);
              local_18 = 0;
              uStack_17 = 0;
              local_630 = &local_28;
              local_640 = &local_610;
              local_628 = 0x1c;
              local_648 = plVar26;
              local_638 = uVar19;
              local_20 = uVar8;
              uStack_1f = uVar9;
              sol_invoke_signed_c(&local_648,&local_4c0,uVar19,8,0);
              param_4[1] = uVar18 - uVar19;
              plVar27 = param_2 + uVar19;
              param_2 = plVar31;
              goto LAB_ram_00004ca8;
            }
            iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020a20,0x20);
            if (iVar10 == 0) {
              in_R0 = 0x1773;
              if (0x11 < uVar17) {
                lVar28 = 0;
                lVar13 = (longlong)&local_608 + 1;
                do {
                  lVar11 = *param_2;
                  bVar1 = *(char *)(lVar11 + 1) != '\0';
                  bVar2 = *(char *)(lVar11 + 2) != '\0';
                  cVar3 = *(char *)(lVar11 + 3);
                  uVar29 = *(undefined8 *)(lVar11 + 0x50);
                  *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
                  *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
                  *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
                  param_3 = (longlong *)(lVar11 + 0x48);
                  *(longlong **)((longlong)local_4b8 + lVar28) = param_3;
                  auStack_490[lVar28 + 2] = cVar3 != '\0';
                  *(longlong *)((longlong)&local_4c0 + lVar28) = lVar11 + 8;
                  auStack_490[lVar28 + 1] = bVar2;
                  auStack_490[lVar28] = bVar1;
                  *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
                  *(bool *)lVar13 = bVar1;
                  *(bool *)(lVar13 + -1) = bVar2;
                  *(longlong *)(lVar13 + -9) = lVar11 + 8;
                  lVar13 = lVar13 + 0x10;
                  param_2 = param_2 + 1;
                  lVar28 = lVar28 + 0x38;
                } while (lVar28 != 0x3b8);
                uStack_27 = SUB87(local_6c8,0);
                local_20 = (undefined1)((ulonglong)local_6c8 >> 0x38);
                uStack_1f = 0;
                local_18 = 0;
                local_28 = 9;
                local_630 = &local_28;
                local_640 = &local_610;
                local_628 = 0x18;
                local_638 = 0x11;
                local_648 = plVar26;
                sol_invoke_signed_c(&local_648,&local_4c0,0x11,8,0);
                param_4[1] = uVar17 - 0x12;
                plVar27 = plVar30 + 0x12;
                goto LAB_ram_00004ca8;
              }
              goto LAB_ram_000052c0;
            }
            iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_000212a6,0x20);
            if (iVar10 == 0) {
              in_R0 = 0x1773;
              if (uVar18 != 0) {
                local_640 = *(longlong **)(*param_2 + 0x50);
                local_648 = (longlong *)(*param_2 + 0x58);
                FUN_ram_0000e1c0(&local_4c0,&local_648);
                if (local_116 == '\x02') goto LAB_ram_000053a8;
                local_670 = 0xf;
                if ((local_488 != '\x04') && (local_488 != '\0')) {
                  local_670 = 0x10;
                }
                in_R0 = 0x1773;
                if (local_670 <= uVar18) {
                  lVar28 = 0;
                  uVar17 = 0;
                  lVar13 = (longlong)&local_608 + 1;
                  plVar30 = param_2;
                  do {
                    lVar11 = *plVar30;
                    bVar1 = *(char *)(lVar11 + 1) != '\0';
                    bVar2 = *(char *)(lVar11 + 2) != '\0';
                    cVar3 = *(char *)(lVar11 + 3);
                    plVar31 = (longlong *)((longlong)&local_4c0 + lVar28);
                    uVar29 = *(undefined8 *)(lVar11 + 0x50);
                    *(longlong *)((longlong)local_4b8 + lVar28 + 0x18) = lVar11 + 0x28;
                    *(longlong *)((longlong)local_4b8 + lVar28 + 0x10) = lVar11 + 0x58;
                    *(undefined8 *)((longlong)local_4b8 + lVar28 + 8) = uVar29;
                    *(longlong *)((longlong)local_4b8 + lVar28) = lVar11 + 0x48;
                    auStack_490[lVar28 + 2] = cVar3 != '\0';
                    *plVar31 = lVar11 + 8;
                    auStack_490[lVar28 + 1] = bVar2;
                    auStack_490[lVar28] = bVar1;
                    *(undefined8 *)((longlong)local_4b8 + lVar28 + 0x20) = 0;
                    *(bool *)lVar13 = bVar1;
                    *(bool *)(lVar13 + -1) = bVar2;
                    *(longlong *)(lVar13 + -9) = lVar11 + 8;
                    lVar13 = lVar13 + 0x10;
                    plVar30 = plVar30 + 1;
                    lVar28 = lVar28 + 0x38;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < local_670);
                  goto LAB_ram_00004bb0;
                }
              }
              goto LAB_ram_000052c0;
            }
            iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020ae0,0x20);
            if (iVar10 == 0) {
              in_R0 = FUN_ram_00005d20(plVar27,param_4,local_6c8);
            }
            else {
              iVar10 = FUN_ram_0001e478(&DAT_ram_000210e4,plVar27,0x20);
              if ((((iVar10 == 0) ||
                   (iVar10 = FUN_ram_0001e478(&DAT_ram_00021104,plVar27,0x20), iVar10 == 0)) ||
                  (iVar10 = FUN_ram_0001e478(&DAT_ram_00021124,plVar27,0x20), iVar10 == 0)) ||
                 ((iVar10 = FUN_ram_0001e478(&DAT_ram_00021144,plVar27,0x20), iVar10 == 0 ||
                  (iVar10 = FUN_ram_0001e478(&DAT_ram_00021164,plVar27,0x20), iVar10 == 0)))) {
                in_R0 = FUN_ram_00005fe8(plVar27,param_4,local_6c8);
              }
              else {
                iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020900,0x20);
                if (iVar10 == 0) {
                  in_R0 = FUN_ram_00006b48(plVar27,param_4,local_6c8);
                }
                else {
                  iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020980,0x20);
                  if (iVar10 == 0) {
                    in_R0 = FUN_ram_00006e00(plVar27,param_4,local_6c8);
                  }
                  else {
                    iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020a60,0x20);
                    if (iVar10 == 0) {
                      in_R0 = FUN_ram_00007c80(plVar27,param_4,local_6c8,&local_658);
                      goto joined_r0x00005188;
                    }
                    iVar10 = FUN_ram_0001e478(plVar27,&DAT_ram_00020aa0,0x20);
                    in_R0 = 6000;
                    if (iVar10 != 0) goto LAB_ram_000052c0;
                    in_R0 = FUN_ram_00007858(plVar27,param_4,local_6c8,
                                             *(undefined8 *)(local_688 + uVar21 * 8));
                    param_3 = plVar27;
                  }
                }
              }
            }
          }
joined_r0x00005188:
          if (in_R0 != 5999) goto LAB_ram_000052c0;
        }
LAB_ram_00004cb0:
        lVar13 = *plVar22;
        uVar17 = *(ulonglong *)(lVar13 + 0x50);
        if (uVar17 < 0x48) goto LAB_ram_00002860;
        param_2 = *(longlong **)(lVar13 + 0x98);
        local_6c8 = (longlong *)0x0;
        if ((longlong *)((longlong)param_2 - (longlong)plVar15) <= param_2) {
          local_6c8 = (longlong *)((longlong)param_2 - (longlong)plVar15);
        }
        local_4c0._4_1_ = 0x20;
        local_4c0._0_4_ = 0x3a706f68;
        local_3f8 = 5;
        if (uVar25 == 0) {
          local_3f8 = 6;
          local_4c0._5_1_ = 0x30;
LAB_ram_00004ea8:
          uVar17 = local_3f8;
          uVar25 = 200 - local_3f8;
          if (8 < uVar25) {
            uVar25 = 9;
          }
          param_3 = (longlong *)((longlong)&local_4c0 + local_3f8);
          FUN_ram_0001e430(param_3,&DAT_ram_000210db,uVar25);
          if (0xbf < uVar17) {
            param_3 = (longlong *)((longlong)param_3 + uVar25);
            *(undefined1 *)((longlong)param_3 + -1) = 0x40;
          }
          local_3f8 = local_3f8 + uVar25;
          if (200 < local_3f8) goto LAB_ram_00004f40;
          if (local_3f8 == 200) goto LAB_ram_00004f50;
          if (plVar15 < param_2) {
            plVar30 = (longlong *)(200 - local_3f8);
            plVar22 = local_6c8;
            lVar13 = 0;
            do {
              lVar28 = lVar13;
              abStack_5fd[lVar28] =
                   (char)plVar22 + (char)(longlong *)((ulonglong)plVar22 / 10) * -10 | 0x30;
              bVar1 = (longlong *)0x9 < plVar22;
              plVar22 = (longlong *)((ulonglong)plVar22 / 10);
              lVar13 = lVar28 + -1;
            } while (bVar1);
            param_3 = (longlong *)-(lVar28 + -1);
            plVar22 = param_3;
            if (plVar30 <= param_3) {
              plVar22 = plVar30;
            }
            sol_memcpy_((undefined1 *)((longlong)&local_4c0 + local_3f8),abStack_5fd + lVar28,
                        plVar22);
            if (plVar30 < param_3) {
              local_3f9 = 0x40;
            }
          }
          else {
            *(undefined1 *)((longlong)&local_4c0 + local_3f8) = 0x30;
            plVar22 = (longlong *)0x1;
          }
          uVar17 = local_3f8 + (longlong)plVar22;
          local_3f8 = uVar17;
          if (200 < uVar17) {
            local_3f8 = 200;
            goto LAB_ram_00004f50;
          }
        }
        else {
          lVar13 = 0;
          do {
            lVar28 = lVar13;
            uVar17 = uVar25 & 0xff;
            uVar18 = uVar17 / 10;
            *(byte *)((longlong)&local_610 + lVar28 + 2) = (char)uVar25 + (char)uVar18 * -10 | 0x30;
            lVar13 = lVar28 + -1;
            uVar25 = uVar18;
          } while (9 < uVar17);
          uVar25 = -(lVar28 + -1);
          uVar17 = uVar25;
          if (0xc2 < uVar25) {
            uVar17 = 0xc3;
          }
          sol_memcpy_((longlong)&local_4c0 + 5,(longlong)&local_610 + lVar28 + 2,uVar17);
          if (0xc3 < uVar25) {
            local_3f9 = 0x40;
          }
          local_3f8 = local_3f8 + uVar17;
          if (local_3f8 < 0xc9) {
            if (local_3f8 != 200) goto LAB_ram_00004ea8;
            goto LAB_ram_00004f50;
          }
LAB_ram_00004f40:
          local_3f8 = 200;
LAB_ram_00004f50:
          uVar17 = 200;
          local_3f9 = 0x40;
        }
        sol_log_(&local_4c0,uVar17);
        in_R0 = 0x1776;
        uVar23 = 0;
        if (param_2 <= plVar15) goto LAB_ram_000052c0;
        sol_log_compute_units_();
        uVar25 = uVar21;
        if (uVar12 <= uVar21) goto LAB_ram_000052e8;
        goto LAB_ram_000029d0;
      }
LAB_ram_000052e8:
      uVar17 = *(ulonglong *)(*(longlong *)(lVar20 + 8) + 0x50);
    } while (uVar17 < 0x48);
    in_R0 = 0x1771;
    uVar23 = 0;
    plVar22 = *(longlong **)(*(longlong *)(lVar20 + 8) + 0x98);
    if (plVar14 < plVar22) {
      param_1[3] = uVar12;
      param_1[2] = uVar16;
      param_1[1] = local_688;
      *param_1 = (longlong)plVar22 - (longlong)plVar14;
      return;
    }
  }
LAB_ram_000052c0:
  *(int *)((longlong)param_1 + 4) = in_R0;
  *(undefined4 *)param_1 = uVar23;
  param_1[1] = 0;
  return;
code_r0x00002cf0:
  uVar23 = 0;
  plVar27 = plVar27 + 1;
  lVar13 = lVar13 + 1;
  lVar28 = lVar28 + -8;
  in_R0 = 0x1773;
  if (lVar28 == 0) goto LAB_ram_000052c0;
  goto LAB_ram_00002d20;
code_r0x00002df0:
  uVar23 = 0;
  param_3 = param_3 + 1;
  lVar13 = lVar13 + 1;
  plVar27 = plVar27 + -1;
  in_R0 = 0x1773;
  if (plVar27 == (longlong *)0x0) goto LAB_ram_000052c0;
  goto LAB_ram_00002e20;
}



// ============================================================
// Function: FUN_ram_00005418
// Address: ram:00005418
// Size: 520 bytes
// Called by: entrypoint
// Calls: FUN_ram_00018308, FUN_ram_0001e430, FUN_ram_00013130, sol_log_
// ============================================================

void FUN_ram_00005418(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 auStack_10c [163];
  undefined1 local_69;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 *local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined1 uStack_1;
  
  local_118 = 0x676e656c20746e75;
  local_120 = 0x6f63636120657461;
  local_128 = 0x6c75636c6163206f;
  local_130 = 0x742064656c696146;
  local_110 = 0x203a6874;
  local_68 = 0x24;
  local_50 = 0;
  local_58 = 1;
  local_60 = 0;
  local_20 = &DAT_ram_000240a8;
  local_28 = &local_60;
  local_10 = 3;
  local_18 = 0x20;
  local_38 = 0;
  local_48[0] = 0;
  lVar2 = FUN_ram_00013130(param_1,local_48);
  uVar1 = local_50;
  if (lVar2 == 0) {
    uVar3 = local_50;
    if (0xa3 < local_50) {
      uVar3 = 0xa4;
    }
    FUN_ram_0001e430(auStack_10c,local_58,uVar3);
    if (0xa4 < uVar1) {
      auStack_10c[uVar3 - 1] = 0x40;
    }
    local_68 = local_68 + uVar3;
    if (200 < local_68) {
      local_69 = 0x40;
      local_68 = 200;
    }
    sol_log_(&local_130,local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_00018308(&DAT_ram_00021080,0x37,&uStack_1,&DAT_ram_00024178,&DAT_ram_00024198);
}



// ============================================================
// Function: FUN_ram_00005620
// Address: ram:00005620
// Size: 1792 bytes
// Called by: FUN_ram_000026c0
// Calls: FUN_ram_0001ffb8, FUN_ram_00020890, FUN_ram_00018240, FUN_ram_0001e478, sol_invoke_signed_c, FUN_ram_0001ba98
// ============================================================

undefined8
FUN_ram_00005620(undefined8 param_1,undefined8 *param_2,undefined *param_3,longlong param_4,
                undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong unaff_R8;
  longlong *plVar16;
  longlong *plVar17;
  undefined *local_6f8 [2];
  undefined8 local_6e8;
  undefined8 local_6e0;
  ulonglong local_6d8;
  longlong local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  longlong lStack_6b8;
  undefined1 local_6b0 [360];
  longlong local_548 [6];
  undefined1 auStack_518 [264];
  undefined *puStack_410;
  undefined8 uStack_408;
  longlong *plStack_400;
  ulonglong uStack_3f8;
  undefined8 *puStack_3f0;
  longlong lStack_3e8;
  undefined1 auStack_3e0 [200];
  longlong alStack_318 [6];
  undefined1 auStack_2e8 [680];
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  undefined8 *local_10;
  undefined8 local_8;
  
  if (*(ulonglong *)(param_4 + 0x50) < 0x20) {
    param_1 = 0x20;
    param_3 = &DAT_ram_000241f8;
    FUN_ram_0001ba98();
  }
  uVar15 = param_2[1];
  if (uVar15 != 0) {
    plVar16 = (longlong *)*param_2;
    lVar7 = *plVar16;
    if (*(ulonglong *)(lVar7 + 0x50) < 0x6b) {
      lVar7 = 0x6b;
      param_3 = &DAT_ram_000242a0;
      FUN_ram_0001ba98(0x6b);
    }
    iVar5 = FUN_ram_0001e478(lVar7 + 0xa3,param_4 + 0x58,0x20);
    uVar12 = 0x17;
    if (iVar5 != 0) {
      uVar12 = 0x15;
    }
    uVar8 = 0x1773;
    if (uVar12 <= uVar15) {
      uVar8 = 0x1777;
      if (1 < (ulonglong)param_5[1]) {
        uVar3 = *(ushort *)*param_5;
        param_5[1] = param_5[1] - 2;
        *param_5 = (ushort *)*param_5 + 1;
        lVar7 = 0;
        puVar10 = local_6b0;
        uVar14 = 0;
        plVar17 = plVar16;
        do {
          lVar6 = *plVar17;
          bVar1 = *(char *)(lVar6 + 1) != '\0';
          bVar2 = *(char *)(lVar6 + 2) != '\0';
          cVar4 = *(char *)(lVar6 + 3);
          uVar8 = *(undefined8 *)(lVar6 + 0x50);
          *(longlong *)((longlong)local_548 + lVar7 + 0x20) = lVar6 + 0x28;
          *(longlong *)((longlong)local_548 + lVar7 + 0x18) = lVar6 + 0x58;
          *(undefined8 *)((longlong)local_548 + lVar7 + 0x10) = uVar8;
          *(longlong *)((longlong)local_548 + lVar7 + 8) = lVar6 + 0x48;
          auStack_518[lVar7 + 2] = cVar4 != '\0';
          *(longlong *)((longlong)local_548 + lVar7) = lVar6 + 8;
          auStack_518[lVar7 + 1] = bVar2;
          auStack_518[lVar7] = bVar1;
          *(undefined8 *)((longlong)local_548 + lVar7 + 0x28) = 0;
          puVar10[1] = bVar1;
          *puVar10 = bVar2;
          *(longlong *)(puVar10 + -8) = lVar6 + 8;
          puVar10 = puVar10 + 0x10;
          plVar17 = plVar17 + 1;
          lVar7 = lVar7 + 0x38;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
        local_30 = (undefined *)0x0;
        local_40 = 0xad837f01a485e633;
        local_38 = param_3;
        if (iVar5 == 0) {
          if (uVar15 < 8) goto LAB_ram_00005cd0;
          lVar7 = plVar16[7];
          uVar14 = *(ulonglong *)(lVar7 + 0x50);
          puVar13 = param_3;
          if (0x47 < uVar14) goto LAB_ram_000059f8;
          do {
            lVar7 = 0x48;
            FUN_ram_0001ba98(0x48,uVar14,&DAT_ram_000241e0);
LAB_ram_000059f8:
            if (uVar15 == 8) goto LAB_ram_00005cf8;
            lVar6 = plVar16[8];
            uVar14 = *(ulonglong *)(lVar6 + 0x50);
          } while (uVar14 < 0x48);
          uVar8 = *(undefined8 *)(lVar7 + 0x98);
          FUN_ram_0001ffb8(&local_6c8,puVar13,0,10000,0);
          FUN_ram_00020890(&local_6d8,local_6c8,local_6c0,(ulonglong)uVar3 + 10000,0);
          uVar14 = local_6d8 + *(longlong *)(lVar6 + 0x98);
          lVar7 = local_6d0 + (ulonglong)(uVar14 < local_6d8);
          if (uVar14 == 0 && lVar7 == 0) {
            return 0x1775;
          }
          FUN_ram_0001ffb8(&local_6e8,local_6d8,local_6d0,uVar8,0);
          FUN_ram_00020890(local_6f8,local_6e8,local_6e0,uVar14,lVar7);
          local_40 = 0xeaebda01123d0666;
          local_30 = param_3 + 5;
          local_38 = local_6f8[0];
        }
        local_10 = &local_40;
        local_20 = &lStack_6b8;
        local_8 = 0x18;
        local_28 = param_1;
        local_18 = uVar12;
        sol_invoke_signed_c(&local_28,local_548,uVar12,8,0);
        param_2[1] = uVar15 - uVar12;
        *param_2 = plVar16 + uVar12;
        uVar8 = 5999;
      }
    }
    return uVar8;
  }
  FUN_ram_00018240(0,0,&DAT_ram_00024288);
  uVar15 = unaff_R8;
LAB_ram_00005cd0:
  FUN_ram_00018240(7,uVar15,&DAT_ram_000242b8);
LAB_ram_00005cf8:
  uVar9 = 8;
  puVar11 = (undefined8 *)&DAT_ram_00000008;
  puVar13 = &DAT_ram_000242d0;
  FUN_ram_00018240();
  uVar8 = 0x1773;
  uStack_3f8 = puVar11[1];
  if (0xc < uStack_3f8) {
    lVar7 = 0;
    puVar10 = auStack_3e0;
    plStack_400 = (longlong *)*puVar11;
    plVar16 = plStack_400;
    do {
      lVar6 = *plVar16;
      bVar1 = *(char *)(lVar6 + 1) != '\0';
      bVar2 = *(char *)(lVar6 + 2) != '\0';
      cVar4 = *(char *)(lVar6 + 3);
      uVar8 = *(undefined8 *)(lVar6 + 0x50);
      *(longlong *)((longlong)alStack_318 + lVar7 + 0x20) = lVar6 + 0x28;
      *(longlong *)((longlong)alStack_318 + lVar7 + 0x18) = lVar6 + 0x58;
      *(undefined8 *)((longlong)alStack_318 + lVar7 + 0x10) = uVar8;
      *(longlong *)((longlong)alStack_318 + lVar7 + 8) = lVar6 + 0x48;
      auStack_2e8[lVar7 + 2] = cVar4 != '\0';
      *(longlong *)((longlong)alStack_318 + lVar7) = lVar6 + 8;
      auStack_2e8[lVar7 + 1] = bVar2;
      auStack_2e8[lVar7] = bVar1;
      *(undefined8 *)((longlong)alStack_318 + lVar7 + 0x28) = 0;
      puVar10[1] = bVar1;
      *puVar10 = bVar2;
      *(longlong *)(puVar10 + -8) = lVar6 + 8;
      puVar10 = puVar10 + 0x10;
      plVar16 = plVar16 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar7 != 0x2d8);
    local_40 = 0xc88775e1919ec6f8;
    local_30 = (undefined *)0x0;
    local_10 = &local_40;
    local_20 = &lStack_3e8;
    local_8 = 0x18;
    local_18 = 0xd;
    puStack_410 = puVar13;
    uStack_408 = uVar9;
    puStack_3f0 = puVar11;
    local_38 = puVar13;
    local_28 = uVar9;
    sol_invoke_signed_c(&local_28,alStack_318,0xd,8,0);
    puStack_3f0[1] = uStack_3f8 - 0xd;
    *puStack_3f0 = plStack_400 + 0xd;
    uVar8 = 5999;
  }
  return uVar8;
}



// ============================================================
// Function: FUN_ram_00005d20
// Address: ram:00005d20
// Size: 712 bytes
// Called by: FUN_ram_000026c0
// Calls: sol_invoke_signed_c
// ============================================================

undefined8 FUN_ram_00005d20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lStack_3e8;
  undefined1 local_3e0 [200];
  longlong local_318 [6];
  undefined1 auStack_2e8 [680];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  undefined8 local_8;
  
  uVar4 = 0x1773;
  uVar7 = param_2[1];
  if (0xc < uVar7) {
    lVar6 = 0;
    puVar8 = local_3e0;
    plVar9 = (longlong *)*param_2;
    plVar10 = plVar9;
    do {
      lVar5 = *plVar10;
      bVar1 = *(char *)(lVar5 + 1) != '\0';
      bVar2 = *(char *)(lVar5 + 2) != '\0';
      cVar3 = *(char *)(lVar5 + 3);
      uVar4 = *(undefined8 *)(lVar5 + 0x50);
      *(longlong *)((longlong)local_318 + lVar6 + 0x20) = lVar5 + 0x28;
      *(longlong *)((longlong)local_318 + lVar6 + 0x18) = lVar5 + 0x58;
      *(undefined8 *)((longlong)local_318 + lVar6 + 0x10) = uVar4;
      *(longlong *)((longlong)local_318 + lVar6 + 8) = lVar5 + 0x48;
      auStack_2e8[lVar6 + 2] = cVar3 != '\0';
      *(longlong *)((longlong)local_318 + lVar6) = lVar5 + 8;
      auStack_2e8[lVar6 + 1] = bVar2;
      auStack_2e8[lVar6] = bVar1;
      *(undefined8 *)((longlong)local_318 + lVar6 + 0x28) = 0;
      puVar8[1] = bVar1;
      *puVar8 = bVar2;
      *(longlong *)(puVar8 + -8) = lVar5 + 8;
      puVar8 = puVar8 + 0x10;
      plVar10 = plVar10 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != 0x2d8);
    local_40 = 0xc88775e1919ec6f8;
    local_30 = 0;
    local_10 = &local_40;
    local_20 = &lStack_3e8;
    local_8 = 0x18;
    local_18 = 0xd;
    local_38 = param_3;
    local_28 = param_1;
    sol_invoke_signed_c(&local_28,local_318,0xd,8,0);
    param_2[1] = uVar7 - 0xd;
    *param_2 = plVar9 + 0xd;
    uVar4 = 5999;
  }
  return uVar4;
}



// ============================================================
// Function: FUN_ram_00005fe8
// Address: ram:00005fe8
// Size: 2912 bytes
// Called by: FUN_ram_000026c0
// Calls: sol_invoke_signed_c
// ============================================================

undefined8 FUN_ram_00005fe8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong local_310;
  undefined1 local_308;
  undefined1 local_307;
  longlong local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  longlong local_2f0;
  undefined1 local_2e8;
  undefined1 local_2e7;
  longlong local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d7;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7;
  longlong local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b7;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7;
  longlong local_2a0;
  undefined1 local_298;
  undefined1 local_297;
  longlong local_290;
  undefined1 local_288;
  undefined1 local_287;
  longlong local_280;
  undefined1 local_278;
  undefined1 local_277;
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  uVar1 = 0x1773;
  uVar3 = param_2[1];
  if (9 < uVar3) {
    plVar4 = (longlong *)*param_2;
    lVar2 = *plVar4;
    local_260 = *(undefined8 *)(lVar2 + 0x50);
    local_250 = lVar2 + 0x28;
    local_258 = lVar2 + 0x58;
    local_268 = lVar2 + 0x48;
    local_310 = lVar2 + 8;
    local_23e = *(char *)(lVar2 + 3) != '\0';
    local_307 = *(char *)(lVar2 + 1) != '\0';
    local_308 = *(char *)(lVar2 + 2) != '\0';
    local_248 = 0;
    lVar2 = plVar4[1];
    local_228 = *(undefined8 *)(lVar2 + 0x50);
    local_218 = lVar2 + 0x28;
    local_220 = lVar2 + 0x58;
    local_230 = lVar2 + 0x48;
    local_300 = lVar2 + 8;
    local_206 = *(char *)(lVar2 + 3) != '\0';
    local_2f7 = *(char *)(lVar2 + 1) != '\0';
    local_2f8 = *(char *)(lVar2 + 2) != '\0';
    local_210 = 0;
    lVar2 = plVar4[2];
    local_1f0 = *(undefined8 *)(lVar2 + 0x50);
    local_1e0 = lVar2 + 0x28;
    local_1e8 = lVar2 + 0x58;
    local_1f8 = lVar2 + 0x48;
    local_2f0 = lVar2 + 8;
    local_1ce = *(char *)(lVar2 + 3) != '\0';
    local_2e7 = *(char *)(lVar2 + 1) != '\0';
    local_2e8 = *(char *)(lVar2 + 2) != '\0';
    local_1d8 = 0;
    lVar2 = plVar4[3];
    local_1b8 = *(undefined8 *)(lVar2 + 0x50);
    local_1a8 = lVar2 + 0x28;
    local_1b0 = lVar2 + 0x58;
    local_1c0 = lVar2 + 0x48;
    local_2e0 = lVar2 + 8;
    local_196 = *(char *)(lVar2 + 3) != '\0';
    local_2d7 = *(char *)(lVar2 + 1) != '\0';
    local_2d8 = *(char *)(lVar2 + 2) != '\0';
    local_1a0 = 0;
    lVar2 = plVar4[4];
    local_180 = *(undefined8 *)(lVar2 + 0x50);
    local_170 = lVar2 + 0x28;
    local_178 = lVar2 + 0x58;
    local_188 = lVar2 + 0x48;
    local_2d0 = lVar2 + 8;
    local_15e = *(char *)(lVar2 + 3) != '\0';
    local_2c7 = *(char *)(lVar2 + 1) != '\0';
    local_2c8 = *(char *)(lVar2 + 2) != '\0';
    local_168 = 0;
    lVar2 = plVar4[5];
    local_148 = *(undefined8 *)(lVar2 + 0x50);
    local_138 = lVar2 + 0x28;
    local_140 = lVar2 + 0x58;
    local_150 = lVar2 + 0x48;
    local_2c0 = lVar2 + 8;
    local_126 = *(char *)(lVar2 + 3) != '\0';
    local_2b7 = *(char *)(lVar2 + 1) != '\0';
    local_2b8 = *(char *)(lVar2 + 2) != '\0';
    local_130 = 0;
    lVar2 = plVar4[6];
    local_110 = *(undefined8 *)(lVar2 + 0x50);
    local_100 = lVar2 + 0x28;
    local_108 = lVar2 + 0x58;
    local_118 = lVar2 + 0x48;
    local_2b0 = lVar2 + 8;
    local_ee = *(char *)(lVar2 + 3) != '\0';
    local_2a7 = *(char *)(lVar2 + 1) != '\0';
    local_2a8 = *(char *)(lVar2 + 2) != '\0';
    local_f8 = 0;
    lVar2 = plVar4[7];
    local_d8 = *(undefined8 *)(lVar2 + 0x50);
    local_c8 = lVar2 + 0x28;
    local_d0 = lVar2 + 0x58;
    local_e0 = lVar2 + 0x48;
    local_2a0 = lVar2 + 8;
    local_b6 = *(char *)(lVar2 + 3) != '\0';
    local_297 = *(char *)(lVar2 + 1) != '\0';
    local_298 = *(char *)(lVar2 + 2) != '\0';
    local_c0 = 0;
    lVar2 = plVar4[8];
    local_a0 = *(undefined8 *)(lVar2 + 0x50);
    local_90 = lVar2 + 0x28;
    local_98 = lVar2 + 0x58;
    local_a8 = lVar2 + 0x48;
    local_290 = lVar2 + 8;
    local_7e = *(char *)(lVar2 + 3) != '\0';
    local_287 = *(char *)(lVar2 + 1) != '\0';
    local_288 = *(char *)(lVar2 + 2) != '\0';
    local_88 = 0;
    lVar2 = plVar4[9];
    local_68 = *(undefined8 *)(lVar2 + 0x50);
    local_58 = lVar2 + 0x28;
    local_60 = lVar2 + 0x58;
    local_70 = lVar2 + 0x48;
    local_280 = lVar2 + 8;
    local_46 = *(char *)(lVar2 + 3) != '\0';
    local_277 = *(char *)(lVar2 + 1) != '\0';
    local_278 = *(char *)(lVar2 + 2) != '\0';
    local_50 = 0;
    local_30 = 0;
    local_39 = 1;
    local_10 = &local_39;
    local_20 = &local_310;
    local_8 = 0x18;
    local_18 = 10;
    local_270 = local_310;
    local_240 = local_307;
    local_23f = local_308;
    local_238 = local_300;
    local_208 = local_2f7;
    local_207 = local_2f8;
    local_200 = local_2f0;
    local_1d0 = local_2e7;
    local_1cf = local_2e8;
    local_1c8 = local_2e0;
    local_198 = local_2d7;
    local_197 = local_2d8;
    local_190 = local_2d0;
    local_160 = local_2c7;
    local_15f = local_2c8;
    local_158 = local_2c0;
    local_128 = local_2b7;
    local_127 = local_2b8;
    local_120 = local_2b0;
    local_f0 = local_2a7;
    local_ef = local_2a8;
    local_e8 = local_2a0;
    local_b8 = local_297;
    local_b7 = local_298;
    local_b0 = local_290;
    local_80 = local_287;
    local_7f = local_288;
    local_78 = local_280;
    local_48 = local_277;
    local_47 = local_278;
    local_38 = param_3;
    local_28 = param_1;
    sol_invoke_signed_c(&local_28,&local_270,10,8,0);
    param_2[1] = uVar3 - 10;
    *param_2 = plVar4 + 10;
    uVar1 = 5999;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_00006b48
// Address: ram:00006b48
// Size: 696 bytes
// Called by: FUN_ram_000026c0
// Calls: sol_invoke_signed_c
// ============================================================

undefined8 FUN_ram_00006b48(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lStack_430;
  undefined1 local_428 [216];
  longlong local_350 [6];
  undefined1 auStack_320 [743];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  uVar4 = 0x1773;
  uVar7 = param_2[1];
  if (0xd < uVar7) {
    lVar6 = 0;
    puVar8 = local_428;
    plVar9 = (longlong *)*param_2;
    plVar10 = plVar9;
    do {
      lVar5 = *plVar10;
      bVar1 = *(char *)(lVar5 + 1) != '\0';
      bVar2 = *(char *)(lVar5 + 2) != '\0';
      cVar3 = *(char *)(lVar5 + 3);
      uVar4 = *(undefined8 *)(lVar5 + 0x50);
      *(longlong *)((longlong)local_350 + lVar6 + 0x20) = lVar5 + 0x28;
      *(longlong *)((longlong)local_350 + lVar6 + 0x18) = lVar5 + 0x58;
      *(undefined8 *)((longlong)local_350 + lVar6 + 0x10) = uVar4;
      *(longlong *)((longlong)local_350 + lVar6 + 8) = lVar5 + 0x48;
      auStack_320[lVar6 + 2] = cVar3 != '\0';
      *(longlong *)((longlong)local_350 + lVar6) = lVar5 + 8;
      auStack_320[lVar6 + 1] = bVar2;
      auStack_320[lVar6] = bVar1;
      *(undefined8 *)((longlong)local_350 + lVar6 + 0x28) = 0;
      puVar8[1] = bVar1;
      *puVar8 = bVar2;
      *(longlong *)(puVar8 + -8) = lVar5 + 8;
      puVar8 = puVar8 + 0x10;
      plVar10 = plVar10 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != 0x310);
    local_30 = 0;
    local_39 = 1;
    local_10 = &local_39;
    local_20 = &lStack_430;
    local_8 = 0x18;
    local_18 = 0xe;
    local_38 = param_3;
    local_28 = param_1;
    sol_invoke_signed_c(&local_28,local_350,0xe,8,0);
    param_2[1] = uVar7 - 0xe;
    *param_2 = plVar9 + 0xe;
    uVar4 = 5999;
  }
  return uVar4;
}



// ============================================================
// Function: FUN_ram_00006e00
// Address: ram:00006e00
// Size: 2648 bytes
// Called by: FUN_ram_000026c0
// Calls: sol_invoke_signed_c
// ============================================================

undefined8 FUN_ram_00006e00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong local_2c8;
  undefined1 local_2c0;
  undefined1 local_2bf;
  longlong local_2b8;
  undefined1 local_2b0;
  undefined1 local_2af;
  longlong local_2a8;
  undefined1 local_2a0;
  undefined1 local_29f;
  longlong local_298;
  undefined1 local_290;
  undefined1 local_28f;
  longlong local_288;
  undefined1 local_280;
  undefined1 local_27f;
  longlong local_278;
  undefined1 local_270;
  undefined1 local_26f;
  longlong local_268;
  undefined1 local_260;
  undefined1 local_25f;
  longlong local_258;
  undefined1 local_250;
  undefined1 local_24f;
  longlong local_248;
  undefined1 local_240;
  undefined1 local_23f;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  longlong local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1cf;
  undefined1 local_1ce;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  uVar1 = 0x1773;
  uVar3 = param_2[1];
  if (8 < uVar3) {
    plVar4 = (longlong *)*param_2;
    lVar2 = *plVar4;
    local_228 = *(undefined8 *)(lVar2 + 0x50);
    local_218 = lVar2 + 0x28;
    local_220 = lVar2 + 0x58;
    local_230 = lVar2 + 0x48;
    local_2c8 = lVar2 + 8;
    local_206 = *(char *)(lVar2 + 3) != '\0';
    local_2bf = *(char *)(lVar2 + 1) != '\0';
    local_2c0 = *(char *)(lVar2 + 2) != '\0';
    local_210 = 0;
    lVar2 = plVar4[1];
    local_1f0 = *(undefined8 *)(lVar2 + 0x50);
    local_1e0 = lVar2 + 0x28;
    local_1e8 = lVar2 + 0x58;
    local_1f8 = lVar2 + 0x48;
    local_2b8 = lVar2 + 8;
    local_1ce = *(char *)(lVar2 + 3) != '\0';
    local_2af = *(char *)(lVar2 + 1) != '\0';
    local_2b0 = *(char *)(lVar2 + 2) != '\0';
    local_1d8 = 0;
    lVar2 = plVar4[2];
    local_1b8 = *(undefined8 *)(lVar2 + 0x50);
    local_1a8 = lVar2 + 0x28;
    local_1b0 = lVar2 + 0x58;
    local_1c0 = lVar2 + 0x48;
    local_2a8 = lVar2 + 8;
    local_196 = *(char *)(lVar2 + 3) != '\0';
    local_29f = *(char *)(lVar2 + 1) != '\0';
    local_2a0 = *(char *)(lVar2 + 2) != '\0';
    local_1a0 = 0;
    lVar2 = plVar4[3];
    local_180 = *(undefined8 *)(lVar2 + 0x50);
    local_170 = lVar2 + 0x28;
    local_178 = lVar2 + 0x58;
    local_188 = lVar2 + 0x48;
    local_298 = lVar2 + 8;
    local_15e = *(char *)(lVar2 + 3) != '\0';
    local_28f = *(char *)(lVar2 + 1) != '\0';
    local_290 = *(char *)(lVar2 + 2) != '\0';
    local_168 = 0;
    lVar2 = plVar4[4];
    local_148 = *(undefined8 *)(lVar2 + 0x50);
    local_138 = lVar2 + 0x28;
    local_140 = lVar2 + 0x58;
    local_150 = lVar2 + 0x48;
    local_288 = lVar2 + 8;
    local_126 = *(char *)(lVar2 + 3) != '\0';
    local_27f = *(char *)(lVar2 + 1) != '\0';
    local_280 = *(char *)(lVar2 + 2) != '\0';
    local_130 = 0;
    lVar2 = plVar4[5];
    local_110 = *(undefined8 *)(lVar2 + 0x50);
    local_100 = lVar2 + 0x28;
    local_108 = lVar2 + 0x58;
    local_118 = lVar2 + 0x48;
    local_278 = lVar2 + 8;
    local_ee = *(char *)(lVar2 + 3) != '\0';
    local_26f = *(char *)(lVar2 + 1) != '\0';
    local_270 = *(char *)(lVar2 + 2) != '\0';
    local_f8 = 0;
    lVar2 = plVar4[6];
    local_d8 = *(undefined8 *)(lVar2 + 0x50);
    local_c8 = lVar2 + 0x28;
    local_d0 = lVar2 + 0x58;
    local_e0 = lVar2 + 0x48;
    local_268 = lVar2 + 8;
    local_b6 = *(char *)(lVar2 + 3) != '\0';
    local_25f = *(char *)(lVar2 + 1) != '\0';
    local_260 = *(char *)(lVar2 + 2) != '\0';
    local_c0 = 0;
    lVar2 = plVar4[7];
    local_a0 = *(undefined8 *)(lVar2 + 0x50);
    local_90 = lVar2 + 0x28;
    local_98 = lVar2 + 0x58;
    local_a8 = lVar2 + 0x48;
    local_258 = lVar2 + 8;
    local_7e = *(char *)(lVar2 + 3) != '\0';
    local_24f = *(char *)(lVar2 + 1) != '\0';
    local_250 = *(char *)(lVar2 + 2) != '\0';
    local_88 = 0;
    lVar2 = plVar4[8];
    local_68 = *(undefined8 *)(lVar2 + 0x50);
    local_58 = lVar2 + 0x28;
    local_60 = lVar2 + 0x58;
    local_70 = lVar2 + 0x48;
    local_248 = lVar2 + 8;
    local_46 = *(char *)(lVar2 + 3) != '\0';
    local_23f = *(char *)(lVar2 + 1) != '\0';
    local_240 = *(char *)(lVar2 + 2) != '\0';
    local_50 = 0;
    local_30 = 0;
    local_39 = 1;
    local_10 = &local_39;
    local_20 = &local_2c8;
    local_8 = 0x18;
    local_18 = 9;
    local_238 = local_2c8;
    local_208 = local_2bf;
    local_207 = local_2c0;
    local_200 = local_2b8;
    local_1d0 = local_2af;
    local_1cf = local_2b0;
    local_1c8 = local_2a8;
    local_198 = local_29f;
    local_197 = local_2a0;
    local_190 = local_298;
    local_160 = local_28f;
    local_15f = local_290;
    local_158 = local_288;
    local_128 = local_27f;
    local_127 = local_280;
    local_120 = local_278;
    local_f0 = local_26f;
    local_ef = local_270;
    local_e8 = local_268;
    local_b8 = local_25f;
    local_b7 = local_260;
    local_b0 = local_258;
    local_80 = local_24f;
    local_7f = local_250;
    local_78 = local_248;
    local_48 = local_23f;
    local_47 = local_240;
    local_38 = param_3;
    local_28 = param_1;
    sol_invoke_signed_c(&local_28,&local_238,9,8,0);
    param_2[1] = uVar3 - 9;
    *param_2 = plVar4 + 9;
    uVar1 = 5999;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_00007858
// Address: ram:00007858
// Size: 1064 bytes
// Called by: FUN_ram_000026c0
// Calls: FUN_ram_0001e478, sol_invoke_signed_c, FUN_ram_0001ba98
// ============================================================

undefined8
FUN_ram_00007858(undefined8 param_1,longlong *param_2,undefined *param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lStack_4e0;
  undefined1 local_4d8 [248];
  longlong local_3e0 [6];
  undefined1 auStack_3b0 [848];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined4 local_35;
  undefined2 local_31;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  undefined8 local_8;
  
  uVar5 = 0x1773;
  uVar9 = param_2[1];
  if (0xf < uVar9) {
    if (*(ulonglong *)(param_4 + 0x50) < 0x20) {
      param_3 = &DAT_ram_000241f8;
      FUN_ram_0001ba98(0x20);
    }
    plVar10 = (longlong *)*param_2;
    lVar6 = plVar10[4];
    if (*(ulonglong *)(lVar6 + 0x50) < 0x2b) {
      lVar6 = 0x2b;
      param_3 = &DAT_ram_00024338;
      FUN_ram_0001ba98(0x2b);
    }
    iVar4 = FUN_ram_0001e478(lVar6 + 99,param_4 + 0x58,0x20);
    lVar6 = 0;
    puVar7 = local_4d8;
    plVar8 = plVar10;
    do {
      lVar11 = *plVar8;
      bVar1 = *(char *)(lVar11 + 1) != '\0';
      bVar2 = *(char *)(lVar11 + 2) != '\0';
      cVar3 = *(char *)(lVar11 + 3);
      uVar5 = *(undefined8 *)(lVar11 + 0x50);
      *(longlong *)((longlong)local_3e0 + lVar6 + 0x20) = lVar11 + 0x28;
      *(longlong *)((longlong)local_3e0 + lVar6 + 0x18) = lVar11 + 0x58;
      *(undefined8 *)((longlong)local_3e0 + lVar6 + 0x10) = uVar5;
      *(longlong *)((longlong)local_3e0 + lVar6 + 8) = lVar11 + 0x48;
      auStack_3b0[lVar6 + 2] = cVar3 != '\0';
      *(longlong *)((longlong)local_3e0 + lVar6) = lVar11 + 8;
      auStack_3b0[lVar6 + 1] = bVar2;
      auStack_3b0[lVar6] = bVar1;
      *(undefined8 *)((longlong)local_3e0 + lVar6 + 0x28) = 0;
      puVar7[1] = bVar1;
      *puVar7 = bVar2;
      *(longlong *)(puVar7 + -8) = lVar11 + 8;
      puVar7 = puVar7 + 0x10;
      plVar8 = plVar8 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar6 != 0x380);
    local_48 = 0x100013b50;
    if (iVar4 != 0) {
      local_48 = 0x35bb7f32a81b33af;
    }
    local_60 = 0xc88775e1919ec6f8;
    local_40 = 0;
    if (iVar4 != 0) {
      local_40 = 0xfffec4b1;
    }
    local_37 = iVar4 == 0;
    local_31 = 0x205;
    local_35 = 1;
    local_36 = 1;
    local_38 = 1;
    local_50 = 0;
    local_10 = &local_60;
    local_20 = &lStack_4e0;
    local_8 = 0x31;
    local_18 = 0x10;
    local_58 = param_3;
    local_28 = param_1;
    sol_invoke_signed_c(&local_28,local_3e0,0x10,8,0);
    param_2[1] = uVar9 - 0x10;
    *param_2 = (longlong)(plVar10 + 0x10);
    uVar5 = 5999;
  }
  return uVar5;
}



// ============================================================
// Function: FUN_ram_00007c80
// Address: ram:00007c80
// Size: 2792 bytes
// Called by: FUN_ram_000026c0
// Calls: sol_invoke_signed_c
// ============================================================

undefined8
FUN_ram_00007c80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7;
  longlong local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b7;
  longlong local_2b0;
  undefined1 local_2a8;
  undefined1 local_2a7;
  longlong local_2a0;
  undefined1 local_298;
  undefined1 local_297;
  longlong local_290;
  undefined1 local_288;
  undefined1 local_287;
  longlong local_280;
  undefined1 local_278;
  undefined1 local_277;
  longlong local_270;
  undefined1 local_268;
  undefined1 local_267;
  longlong local_260;
  undefined1 local_258;
  undefined1 local_257;
  longlong local_250;
  undefined1 local_248;
  undefined1 local_247;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_37;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  undefined8 local_8;
  
  uVar2 = 0x1777;
  if (param_4[1] != 0) {
    uVar2 = 0x1773;
    uVar3 = param_2[1];
    if (8 < uVar3) {
      cVar1 = *(char *)*param_4;
      local_38 = 0;
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') {
          return 0x1778;
        }
        local_38 = 1;
      }
      param_4[1] = param_4[1] + -1;
      *param_4 = (char *)*param_4 + 1;
      plVar5 = (longlong *)*param_2;
      lVar4 = *plVar5;
      local_230 = *(undefined8 *)(lVar4 + 0x50);
      local_220 = lVar4 + 0x28;
      local_228 = lVar4 + 0x58;
      local_238 = lVar4 + 0x48;
      local_2d0 = lVar4 + 8;
      local_20e = *(char *)(lVar4 + 3) != '\0';
      local_2c7 = *(char *)(lVar4 + 1) != '\0';
      local_2c8 = *(char *)(lVar4 + 2) != '\0';
      local_218 = 0;
      lVar4 = plVar5[1];
      local_1f8 = *(undefined8 *)(lVar4 + 0x50);
      local_1e8 = lVar4 + 0x28;
      local_1f0 = lVar4 + 0x58;
      local_200 = lVar4 + 0x48;
      local_2c0 = lVar4 + 8;
      local_1d6 = *(char *)(lVar4 + 3) != '\0';
      local_2b7 = *(char *)(lVar4 + 1) != '\0';
      local_2b8 = *(char *)(lVar4 + 2) != '\0';
      local_1e0 = 0;
      lVar4 = plVar5[2];
      local_1c0 = *(undefined8 *)(lVar4 + 0x50);
      local_1b0 = lVar4 + 0x28;
      local_1b8 = lVar4 + 0x58;
      local_1c8 = lVar4 + 0x48;
      local_2b0 = lVar4 + 8;
      local_19e = *(char *)(lVar4 + 3) != '\0';
      local_2a7 = *(char *)(lVar4 + 1) != '\0';
      local_2a8 = *(char *)(lVar4 + 2) != '\0';
      local_1a8 = 0;
      lVar4 = plVar5[3];
      local_188 = *(undefined8 *)(lVar4 + 0x50);
      local_178 = lVar4 + 0x28;
      local_180 = lVar4 + 0x58;
      local_190 = lVar4 + 0x48;
      local_2a0 = lVar4 + 8;
      local_166 = *(char *)(lVar4 + 3) != '\0';
      local_297 = *(char *)(lVar4 + 1) != '\0';
      local_298 = *(char *)(lVar4 + 2) != '\0';
      local_170 = 0;
      lVar4 = plVar5[4];
      local_150 = *(undefined8 *)(lVar4 + 0x50);
      local_140 = lVar4 + 0x28;
      local_148 = lVar4 + 0x58;
      local_158 = lVar4 + 0x48;
      local_290 = lVar4 + 8;
      local_12e = *(char *)(lVar4 + 3) != '\0';
      local_287 = *(char *)(lVar4 + 1) != '\0';
      local_288 = *(char *)(lVar4 + 2) != '\0';
      local_138 = 0;
      lVar4 = plVar5[5];
      local_118 = *(undefined8 *)(lVar4 + 0x50);
      local_108 = lVar4 + 0x28;
      local_110 = lVar4 + 0x58;
      local_120 = lVar4 + 0x48;
      local_280 = lVar4 + 8;
      local_f6 = *(char *)(lVar4 + 3) != '\0';
      local_277 = *(char *)(lVar4 + 1) != '\0';
      local_278 = *(char *)(lVar4 + 2) != '\0';
      local_100 = 0;
      lVar4 = plVar5[6];
      local_e0 = *(undefined8 *)(lVar4 + 0x50);
      local_d0 = lVar4 + 0x28;
      local_d8 = lVar4 + 0x58;
      local_e8 = lVar4 + 0x48;
      local_270 = lVar4 + 8;
      local_be = *(char *)(lVar4 + 3) != '\0';
      local_267 = *(char *)(lVar4 + 1) != '\0';
      local_268 = *(char *)(lVar4 + 2) != '\0';
      local_c8 = 0;
      lVar4 = plVar5[7];
      local_a8 = *(undefined8 *)(lVar4 + 0x50);
      local_98 = lVar4 + 0x28;
      local_a0 = lVar4 + 0x58;
      local_b0 = lVar4 + 0x48;
      local_260 = lVar4 + 8;
      local_86 = *(char *)(lVar4 + 3) != '\0';
      local_257 = *(char *)(lVar4 + 1) != '\0';
      local_258 = *(char *)(lVar4 + 2) != '\0';
      local_90 = 0;
      lVar4 = plVar5[8];
      local_70 = *(undefined8 *)(lVar4 + 0x50);
      local_60 = lVar4 + 0x28;
      local_68 = lVar4 + 0x58;
      local_78 = lVar4 + 0x48;
      local_250 = lVar4 + 8;
      local_4e = *(char *)(lVar4 + 3) != '\0';
      local_247 = *(char *)(lVar4 + 1) != '\0';
      local_248 = *(char *)(lVar4 + 2) != '\0';
      local_58 = 0;
      local_48 = 0xfba64eede70c61a7;
      local_37 = 0;
      local_10 = &local_48;
      local_20 = &local_2d0;
      local_8 = 0x19;
      local_18 = 9;
      local_240 = local_2d0;
      local_210 = local_2c7;
      local_20f = local_2c8;
      local_208 = local_2c0;
      local_1d8 = local_2b7;
      local_1d7 = local_2b8;
      local_1d0 = local_2b0;
      local_1a0 = local_2a7;
      local_19f = local_2a8;
      local_198 = local_2a0;
      local_168 = local_297;
      local_167 = local_298;
      local_160 = local_290;
      local_130 = local_287;
      local_12f = local_288;
      local_128 = local_280;
      local_f8 = local_277;
      local_f7 = local_278;
      local_f0 = local_270;
      local_c0 = local_267;
      local_bf = local_268;
      local_b8 = local_260;
      local_88 = local_257;
      local_87 = local_258;
      local_80 = local_250;
      local_50 = local_247;
      local_4f = local_248;
      local_40 = param_3;
      local_28 = param_1;
      sol_invoke_signed_c(&local_28,&local_240,9,8,0);
      param_2[1] = uVar3 - 9;
      *param_2 = plVar5 + 9;
      uVar2 = 5999;
    }
  }
  return uVar2;
}



// ============================================================
// Function: entrypoint
// Address: ram:00008768
// Size: 16008 bytes
// Calls: FUN_ram_0000d310, FUN_ram_00010b78, FUN_ram_00018308, FUN_ram_0001e818, FUN_ram_0001e430, FUN_ram_0001ba98, FUN_ram_000176b0, FUN_ram_000017c0, FUN_ram_000208d8, FUN_ram_00001ff0
// ============================================================
// [DECOMPILATION FAILED: Exception while decompiling ram:00008768: process: timeout
]


// ============================================================
// Function: FUN_ram_0000c5f0
// Address: ram:0000c5f0
// Size: 208 bytes
// Called by: FUN_ram_0000d378, FUN_ram_00010f48, FUN_ram_00016aa0, FUN_ram_00015c98, FUN_ram_000170d0, FUN_ram_000124a0, FUN_ram_000154a0, FUN_ram_00017768, FUN_ram_0000ffb0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_0000c5f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x300008000;
  if (_DAT_ram_300000000 != 0) {
    uVar1 = _DAT_ram_300000000;
  }
  uVar2 = 0;
  if (uVar1 - param_1 <= uVar1) {
    uVar2 = uVar1 - param_1;
  }
  uVar2 = uVar2 & -param_2;
  uVar1 = 0;
  if (0x300000007 < uVar2) {
    uVar1 = uVar2;
    _DAT_ram_300000000 = uVar2;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_0000c6c0
// Address: ram:0000c6c0
// Size: 8 bytes
// Called by: FUN_ram_0000e1c0, FUN_ram_00015640, FUN_ram_000103b0, FUN_ram_000170a0, FUN_ram_00010760, FUN_ram_00015e38
// ============================================================

void FUN_ram_0000c6c0(void)

{
  return;
}



// ============================================================
// Function: FUN_ram_0000c6c8
// Address: ram:0000c6c8
// Size: 264 bytes
// Called by: FUN_ram_0000ffb0
// Calls: FUN_ram_0001e430
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_0000c6c8(undefined8 param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x300008000;
  if (_DAT_ram_300000000 != 0) {
    uVar1 = _DAT_ram_300000000;
  }
  uVar2 = 0;
  if (uVar1 - param_4 <= uVar1) {
    uVar2 = uVar1 - param_4;
  }
  uVar2 = uVar2 & -param_3;
  uVar1 = 0;
  if (0x300000007 < uVar2) {
    if (param_4 <= param_2) {
      param_2 = param_4;
    }
    _DAT_ram_300000000 = uVar2;
    FUN_ram_0001e430(uVar2,param_1,param_2);
    uVar1 = uVar2;
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_0000c7d0
// Address: ram:0000c7d0
// Size: 240 bytes
// Called by: FUN_ram_000170d0
// Calls: FUN_ram_0001e450
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_ram_0000c7d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x300008000;
  if (_DAT_ram_300000000 != 0) {
    uVar1 = _DAT_ram_300000000;
  }
  uVar2 = 0;
  if (uVar1 - param_1 <= uVar1) {
    uVar2 = uVar1 - param_1;
  }
  uVar2 = uVar2 & -param_2;
  uVar1 = 0;
  if (0x300000007 < uVar2) {
    _DAT_ram_300000000 = uVar2;
    FUN_ram_0001e450(uVar2,0);
    uVar1 = uVar2;
  }
  return uVar1;
}



// ============================================================
// Function: custom_panic
// Address: ram:0000c8c0
// Size: 200 bytes
// Calls: FUN_ram_00017768, sol_log_
// ============================================================

void custom_panic(undefined8 param_1)

{
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_10;
  undefined8 local_8;
  
  local_40 = &DAT_ram_00020c50;
  local_30 = &local_10;
  local_8 = 0xab8;
  local_10 = &local_60;
  local_20 = 0;
  local_38 = 1;
  local_28 = 1;
  local_60 = param_1;
  FUN_ram_00017768(auStack_58,&local_40);
  sol_log_(local_50,local_48);
  return;
}



// ============================================================
// Function: FUN_ram_0000c988
// Address: ram:0000c988
// Size: 16 bytes
// Called by: FUN_ram_000176d0
// Calls: FUN_ram_00016f28
// ============================================================

void FUN_ram_0000c988(void)

{
  FUN_ram_00016f28();
  return;
}



// ============================================================
// Function: FUN_ram_0000c998
// Address: ram:0000c998
// Size: 1096 bytes
// Called by: entrypoint
// Calls: sol_invoke_signed_c
// ============================================================

void FUN_ram_0000c998(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char *local_100;
  undefined2 local_f8;
  char *local_f0;
  undefined2 local_e8;
  byte *local_e0;
  undefined2 local_d8;
  char *local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  byte *local_60;
  byte *local_58;
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined *local_28;
  char **local_20;
  undefined8 local_18;
  undefined *local_10;
  undefined8 local_8;
  
  local_c8 = *(char **)*param_2;
  local_90 = *(char **)param_2[1];
  local_58 = *(byte **)param_2[2];
  local_e0 = local_58 + 8;
  local_f0 = local_90 + 8;
  local_100 = local_c8 + 8;
  local_d8 = 0x100;
  local_e8 = 1;
  local_f8 = 1;
  if (*local_c8 == -1) {
    local_a0 = local_c8[1] != '\0';
    local_9f = local_c8[2] != '\0';
    local_9e = local_c8[3] != '\0';
    local_c0 = *(undefined8 *)(local_c8 + 0x50);
    local_b0 = local_c8 + 0x28;
    local_b8 = local_c8 + 0x58;
    local_c8 = local_c8 + 0x48;
    local_a8 = 0;
    if (*local_90 == -1) {
      local_68 = local_90[1] != '\0';
      local_67 = local_90[2] != '\0';
      local_66 = local_90[3] != '\0';
      local_88 = *(undefined8 *)(local_90 + 0x50);
      local_78 = local_90 + 0x28;
      local_80 = local_90 + 0x58;
      local_90 = local_90 + 0x48;
      local_70 = 0;
      if ((*local_58 & 0x88) == 0x88) {
        local_30 = local_58[1] != 0;
        local_2f = local_58[2] != 0;
        local_2e = local_58[3] != 0;
        local_50 = *(undefined8 *)(local_58 + 0x50);
        local_40 = local_58 + 0x28;
        local_48 = local_58 + 0x58;
        local_58 = local_58 + 0x48;
        local_38 = 0;
        local_10 = &DAT_ram_000211c7;
        local_20 = &local_100;
        local_28 = &DAT_ram_000209c0;
        local_8 = 1;
        local_18 = 3;
        local_d0 = local_100;
        local_98 = local_f0;
        local_60 = local_e0;
        sol_invoke_signed_c(&local_28,&local_d0,3,param_3,param_4);
        uVar1 = 0x1a;
        goto LAB_ram_0000cdd0;
      }
    }
  }
  uVar1 = 0xb;
LAB_ram_0000cdd0:
  *param_1 = uVar1;
  return;
}



// ============================================================
// Function: FUN_ram_0000cde0
// Address: ram:0000cde0
// Size: 1152 bytes
// Called by: entrypoint
// Calls: sol_invoke_signed_c
// ============================================================

void FUN_ram_0000cde0(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char *local_110;
  undefined2 local_108;
  char *local_100;
  undefined2 local_f8;
  byte *local_f0;
  undefined2 local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  char *local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  byte *local_60;
  byte *local_58;
  undefined8 local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined *local_28;
  char **local_20;
  undefined8 local_18;
  undefined1 *local_10;
  undefined8 local_8;
  
  local_c8 = *(char **)*param_2;
  local_90 = *(char **)param_2[1];
  local_58 = *(byte **)param_2[2];
  local_f0 = local_58 + 8;
  local_100 = local_90 + 8;
  local_110 = local_c8 + 8;
  local_e8 = 0x100;
  local_f8 = 1;
  local_108 = 1;
  local_d9 = 3;
  local_d8 = param_2[3];
  if (*local_c8 == -1) {
    local_a0 = local_c8[1] != '\0';
    local_9f = local_c8[2] != '\0';
    local_9e = local_c8[3] != '\0';
    local_c0 = *(undefined8 *)(local_c8 + 0x50);
    local_b0 = local_c8 + 0x28;
    local_b8 = local_c8 + 0x58;
    local_c8 = local_c8 + 0x48;
    local_a8 = 0;
    if (*local_90 == -1) {
      local_68 = local_90[1] != '\0';
      local_67 = local_90[2] != '\0';
      local_66 = local_90[3] != '\0';
      local_88 = *(undefined8 *)(local_90 + 0x50);
      local_78 = local_90 + 0x28;
      local_80 = local_90 + 0x58;
      local_90 = local_90 + 0x48;
      local_70 = 0;
      if ((*local_58 & 0x88) == 0x88) {
        local_30 = local_58[1] != 0;
        local_2f = local_58[2] != 0;
        local_2e = local_58[3] != 0;
        local_50 = *(undefined8 *)(local_58 + 0x50);
        local_40 = local_58 + 0x28;
        local_48 = local_58 + 0x58;
        local_58 = local_58 + 0x48;
        local_38 = 0;
        local_10 = &local_d9;
        local_20 = &local_110;
        local_28 = &DAT_ram_000209c0;
        local_8 = 9;
        local_18 = 3;
        local_d0 = local_110;
        local_98 = local_100;
        local_60 = local_f0;
        sol_invoke_signed_c(&local_28,&local_d0,3,param_3,param_4);
        uVar1 = 0x1a;
        goto LAB_ram_0000d250;
      }
    }
  }
  uVar1 = 0xb;
LAB_ram_0000d250:
  *param_1 = uVar1;
  return;
}



// ============================================================
// Function: FUN_ram_0000d260
// Address: ram:0000d260
// Size: 176 bytes
// Called by: entrypoint
// ============================================================

uint FUN_ram_0000d260(undefined8 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = *(uint *)(param_1 + 3);
  *(undefined4 *)(param_1 + 3) = 0x110000;
  if (uVar1 == 0x110000) {
    uVar1 = 0x110000;
    pbVar2 = (byte *)*param_1;
    if (pbVar2 != (byte *)param_1[1]) {
      *param_1 = pbVar2 + 1;
      uVar1 = (uint)*(byte *)(param_1[2] + (ulonglong)(*pbVar2 >> 4));
      *(uint *)(param_1 + 3) = (uint)*(byte *)(param_1[2] + ((ulonglong)*pbVar2 & 0xf));
    }
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_0000d310
// Address: ram:0000d310
// Size: 104 bytes
// Called by: entrypoint
// ============================================================

void FUN_ram_0000d310(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (param_2[1] - *param_2) * 2 | (ulonglong)((int)param_2[3] != 0x110000);
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = 1;
  return;
}



// ============================================================
// Function: FUN_ram_0000d378
// Address: ram:0000d378
// Size: 160 bytes
// Called by: FUN_ram_0000d500, FUN_ram_0000faf0, FUN_ram_0000e030
// Calls: FUN_ram_0000c5f0, FUN_ram_00016aa0, FUN_ram_000176d0
// ============================================================

void FUN_ram_0000d378(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_ram_0000c5f0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_ram_000176d0(8,0x18);
  }
  puVar1[2] = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = *param_1;
  FUN_ram_00016aa0(0x14,puVar1,&DAT_ram_000243a8);
  return;
}



// ============================================================
// Function: FUN_ram_0000d500
// Address: ram:0000d500
// Size: 432 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_0000d378, FUN_ram_00015640, FUN_ram_00017768
// ============================================================

void FUN_ram_0000d500(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char *pcVar3;
  char local_59;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined8 local_38;
  undefined1 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_10;
  code *local_8;
  
  pcVar3 = (char *)*param_2;
  if (param_2[1] == 0) {
    uVar1 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_2 = pcVar3;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
  }
  else {
    local_59 = *pcVar3;
    param_2[1] = param_2[1] + -1;
    *param_2 = pcVar3 + 1;
    if (local_59 == '\0') {
      param_1[1] = 0;
      uVar2 = 0;
    }
    else if (local_59 == '\x01') {
      param_1[1] = 1;
      uVar2 = 0;
    }
    else {
      local_40 = &DAT_ram_00024378;
      local_30 = &local_10;
      local_8 = FUN_ram_0001d378;
      local_10 = &local_59;
      local_20 = 0;
      local_38 = 1;
      local_28 = 1;
      FUN_ram_00017768(auStack_58,&local_40);
      uVar1 = FUN_ram_0000d378(auStack_58);
      *(undefined8 *)(param_1 + 8) = uVar1;
      uVar2 = 1;
    }
    *param_1 = uVar2;
  }
  return;
}



// ============================================================
// Function: FUN_ram_0000d6b0
// Address: ram:0000d6b0
// Size: 288 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_00015640
// ============================================================

void FUN_ram_0000d6b0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined7 uStack_f;
  
  puVar6 = (undefined4 *)*param_2;
  uVar3 = param_2[1];
  if (uVar3 < 0x20) {
    puVar6 = (undefined4 *)((longlong)puVar6 + uVar3);
    uVar2 = FUN_ram_00015640(&DAT_ram_00024360);
    lVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((longlong)puVar6 + 6);
    uVar1 = *(undefined1 *)((longlong)puVar6 + 0xe);
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(puVar6 + 1);
    *(undefined4 *)(param_1 + 1) = *puVar6;
    uStack_f = (undefined7)((ulonglong)uVar5 >> 8);
    uVar2 = CONCAT17(uVar1,uStack_f);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)puVar6 + 0x1f);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)((longlong)puVar6 + 0x17);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((longlong)puVar6 + 0xf);
    *(char *)(param_1 + 7) = (char)uVar5;
    lVar4 = uVar3 - 0x20;
    puVar6 = puVar6 + 8;
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_2[1] = lVar4;
  *param_2 = puVar6;
  *(bool *)param_1 = uVar3 < 0x20;
  return;
}



// ============================================================
// Function: FUN_ram_0000d7d0
// Address: ram:0000d7d0
// Size: 1568 bytes
// Called by: FUN_ram_0000ddf0
// Calls: FUN_ram_00015640
// ============================================================

void FUN_ram_0000d7d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  
  puVar2 = (undefined8 *)*param_2;
  uVar25 = param_2[1];
  uVar3 = uVar25;
  puVar24 = puVar2;
  if (7 < uVar25) {
    puVar24 = puVar2 + 1;
    uVar3 = uVar25 - 8;
    if (7 < uVar3) {
      puVar24 = puVar2 + 2;
      uVar3 = uVar25 - 0x10;
      if (7 < uVar3) {
        puVar24 = puVar2 + 3;
        uVar3 = uVar25 - 0x18;
        if (7 < uVar3) {
          puVar24 = puVar2 + 4;
          uVar3 = uVar25 - 0x20;
          if (7 < uVar3) {
            puVar24 = puVar2 + 5;
            uVar3 = uVar25 - 0x28;
            if (7 < uVar3) {
              puVar24 = puVar2 + 6;
              uVar3 = uVar25 - 0x30;
              if (7 < uVar3) {
                puVar24 = puVar2 + 7;
                uVar3 = uVar25 - 0x38;
                if (7 < uVar3) {
                  puVar24 = puVar2 + 8;
                  uVar3 = uVar25 - 0x40;
                  if (7 < uVar3) {
                    uVar4 = *puVar2;
                    uVar5 = puVar2[1];
                    uVar6 = puVar2[2];
                    uVar7 = puVar2[3];
                    uVar8 = puVar2[4];
                    uVar20 = puVar2[5];
                    uVar21 = puVar2[6];
                    uVar22 = puVar2[7];
                    uVar1 = puVar2[8];
                    puVar24 = puVar2 + 9;
                    *param_2 = (longlong)puVar24;
                    uVar3 = uVar25 - 0x48;
                    if (7 < uVar3) {
                      puVar24 = puVar2 + 10;
                      uVar3 = uVar25 - 0x50;
                      if (7 < uVar3) {
                        puVar24 = puVar2 + 0xb;
                        uVar3 = uVar25 - 0x58;
                        if (7 < uVar3) {
                          puVar24 = puVar2 + 0xc;
                          uVar3 = uVar25 - 0x60;
                          if (7 < uVar3) {
                            puVar24 = puVar2 + 0xd;
                            uVar3 = uVar25 - 0x68;
                            if (7 < uVar3) {
                              puVar24 = puVar2 + 0xe;
                              uVar3 = uVar25 - 0x70;
                              if (7 < uVar3) {
                                puVar24 = puVar2 + 0xf;
                                uVar3 = uVar25 - 0x78;
                                if (7 < uVar3) {
                                  puVar24 = puVar2 + 0x10;
                                  uVar3 = uVar25 - 0x80;
                                  if (7 < uVar3) {
                                    puVar24 = puVar2 + 0x11;
                                    uVar3 = uVar25 - 0x88;
                                    if (7 < uVar3) {
                                      puVar24 = puVar2 + 0x12;
                                      uVar3 = uVar25 - 0x90;
                                      if (7 < uVar3) {
                                        puVar24 = puVar2 + 0x13;
                                        uVar3 = uVar25 - 0x98;
                                        if (7 < uVar3) {
                                          puVar24 = puVar2 + 0x14;
                                          uVar3 = uVar25 - 0xa0;
                                          if (7 < uVar3) {
                                            uVar9 = puVar2[9];
                                            uVar10 = puVar2[10];
                                            uVar11 = puVar2[0xb];
                                            uVar12 = puVar2[0xc];
                                            uVar13 = puVar2[0xd];
                                            uVar14 = puVar2[0xe];
                                            uVar15 = puVar2[0xf];
                                            uVar16 = puVar2[0x10];
                                            uVar17 = puVar2[0x11];
                                            uVar18 = puVar2[0x12];
                                            uVar23 = puVar2[0x13];
                                            uVar19 = puVar2[0x14];
                                            param_2[1] = uVar25 - 0xa8;
                                            *param_2 = (longlong)(puVar2 + 0x15);
                                            param_1[0x15] = uVar19;
                                            param_1[0x14] = uVar23;
                                            param_1[0x13] = uVar18;
                                            param_1[0x12] = uVar17;
                                            param_1[0x11] = uVar16;
                                            param_1[0x10] = uVar15;
                                            param_1[0xf] = uVar14;
                                            param_1[0xe] = uVar13;
                                            param_1[0xd] = uVar12;
                                            param_1[0xc] = uVar11;
                                            param_1[0xb] = uVar10;
                                            param_1[10] = uVar9;
                                            param_1[9] = uVar1;
                                            param_1[8] = uVar22;
                                            param_1[7] = uVar21;
                                            param_1[6] = uVar20;
                                            param_1[5] = uVar8;
                                            param_1[4] = uVar7;
                                            param_1[3] = uVar6;
                                            param_1[2] = uVar5;
                                            param_1[1] = uVar4;
                                            uVar1 = 0;
                                            goto LAB_ram_0000dde0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = FUN_ram_00015640(&DAT_ram_00024360);
  *param_2 = (longlong)puVar24 + uVar3;
  param_2[1] = 0;
  param_1[1] = uVar1;
  uVar1 = 1;
LAB_ram_0000dde0:
  *param_1 = uVar1;
  return;
}



// ============================================================
// Function: FUN_ram_0000ddf0
// Address: ram:0000ddf0
// Size: 576 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_00015640, FUN_ram_0001e430, FUN_ram_0000d7d0
// ============================================================

void FUN_ram_0000ddf0(ulonglong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_150 [160];
  longlong local_b0;
  ulonglong local_a8;
  undefined1 auStack_a0 [160];
  
  puVar5 = (undefined4 *)*param_2;
  uVar3 = param_2[1];
  if (uVar3 < 6) {
    local_a8 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_2 = (longlong)puVar5 + uVar3;
    param_2[1] = 0;
  }
  else {
    uVar2 = *(undefined2 *)(puVar5 + 1);
    uVar1 = *puVar5;
    param_2[1] = uVar3 - 6;
    *param_2 = (longlong)puVar5 + 6;
    FUN_ram_0000d7d0(&local_b0,param_2);
    uVar3 = local_a8;
    if (local_b0 == 0) {
      FUN_ram_0001e430(auStack_150,auStack_a0,0xa0);
      FUN_ram_0000d7d0(&local_b0,param_2);
      if (local_b0 != 0) {
        lVar4 = 8;
      }
      else {
        FUN_ram_0001e430(param_1 + 0x17,auStack_a0,0xa0);
        *(undefined2 *)((longlong)param_1 + 0x15c) = uVar2;
        *(undefined4 *)(param_1 + 0x2b) = uVar1;
        FUN_ram_0001e430(param_1 + 2,auStack_150,0xa0);
        param_1[1] = uVar3;
        lVar4 = 0xb0;
      }
      uVar3 = (ulonglong)(local_b0 != 0);
      goto LAB_ram_0000e008;
    }
  }
  uVar3 = 1;
  lVar4 = 8;
LAB_ram_0000e008:
  *(ulonglong *)((longlong)param_1 + lVar4) = local_a8;
  *param_1 = uVar3;
  return;
}



// ============================================================
// Function: FUN_ram_0000e030
// Address: ram:0000e030
// Size: 400 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_0000d378, FUN_ram_00015640, FUN_ram_00017768
// ============================================================

void FUN_ram_0000e030(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char local_59;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined8 local_38;
  char **local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_10;
  undefined1 *local_8;
  
  if (param_2[1] == 0) {
    uVar1 = FUN_ram_00015640(&DAT_ram_00024360);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  }
  local_59 = *(char *)*param_2;
  param_2[1] = param_2[1] + -1;
  *param_2 = (char *)*param_2 + 1;
  uVar2 = 0;
  uVar3 = 0;
  if (local_59 != '\0') {
    if (local_59 != '\x01') {
      local_40 = &DAT_ram_00024400;
      local_30 = &local_10;
      local_8 = &LAB_ram_0000d418;
      local_10 = &local_59;
      local_20 = 0;
      local_38 = 1;
      local_28 = 1;
      FUN_ram_00017768(auStack_58,&local_40);
      uVar1 = FUN_ram_0000d378(auStack_58);
      *(undefined8 *)(param_1 + 8) = uVar1;
      uVar2 = 1;
      goto LAB_ram_0000e1b0;
    }
    uVar3 = 1;
  }
  param_1[1] = uVar3;
LAB_ram_0000e1b0:
  *param_1 = uVar2;
  return;
}



// ============================================================
// Function: FUN_ram_0000e1c0
// Address: ram:0000e1c0
// Size: 5048 bytes
// Called by: FUN_ram_000026c0
// Calls: FUN_ram_000124a0, FUN_ram_0000f578, FUN_ram_0001e430, FUN_ram_0000d6b0, FUN_ram_0000f9d0, FUN_ram_0000e030, FUN_ram_0000d500, FUN_ram_0000c6c0, FUN_ram_0000faf0, FUN_ram_00015640
// ============================================================

void FUN_ram_0000e1c0(ulonglong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong *unaff_R6;
  ulonglong *puVar12;
  undefined8 *puVar13;
  undefined8 unaff_R8;
  undefined1 uVar14;
  undefined8 unaff_R9;
  longlong lVar15;
  undefined8 local_530;
  undefined8 local_520;
  undefined1 local_518;
  undefined1 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong *local_4a8;
  ulonglong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined4 local_480;
  undefined2 local_47c;
  undefined8 local_478;
  undefined8 local_470;
  undefined1 local_468;
  undefined4 local_460;
  undefined2 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448;
  undefined4 local_440;
  undefined2 local_43c;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined4 local_420;
  undefined2 local_41c;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408;
  undefined4 local_400;
  undefined2 local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined4 local_3e0;
  undefined2 local_3dc;
  ulonglong local_3d8;
  ulonglong local_3d0;
  undefined1 local_3c8;
  undefined4 uStack_3c0;
  undefined3 uStack_3bc;
  ulonglong local_3b8;
  ulonglong local_3b0;
  undefined1 local_3a8;
  undefined4 uStack_3a0;
  undefined3 uStack_39c;
  ulonglong local_398;
  ulonglong local_390;
  undefined1 local_388;
  undefined4 uStack_380;
  undefined3 uStack_37c;
  undefined8 local_378;
  undefined1 local_370;
  undefined4 local_368;
  undefined2 local_364;
  ulonglong local_360;
  ulonglong local_358;
  ulonglong local_350;
  ulonglong local_348;
  ulonglong local_340;
  undefined1 local_338;
  undefined4 uStack_330;
  undefined3 uStack_32c;
  undefined1 auStack_328 [72];
  undefined1 auStack_2e0 [48];
  char local_2b0;
  undefined1 uStack_2af;
  undefined2 uStack_2ae;
  undefined4 uStack_2ac;
  undefined1 local_2a8;
  undefined7 uStack_2a7;
  ulonglong local_2a0;
  ulonglong local_298;
  undefined1 local_290;
  undefined7 uStack_28f;
  char local_278;
  undefined4 uStack_277;
  undefined3 uStack_273;
  undefined1 auStack_150 [336];
  
  uVar8 = param_2[1];
  if (uVar8 < 8) {
    uVar7 = 8;
    FUN_ram_0001ba90(8,uVar8,&DAT_ram_00024410);
LAB_ram_0000ea68:
    if (uVar7 - 8 < 0x18) {
LAB_ram_0000ea88:
      uVar6 = FUN_ram_00015640(&DAT_ram_00024360);
      local_4a0 = 0;
      local_4a8 = (ulonglong *)((longlong)unaff_R6 + uVar7);
    }
    else {
      uVar1 = CONCAT71(uStack_2a7,local_2a8);
      uVar9 = *unaff_R6;
      uVar11 = *(undefined8 *)((longlong)unaff_R6 + 0xe);
      local_2a8 = *(undefined1 *)((longlong)unaff_R6 + 0x16);
      local_378 = *(undefined8 *)((longlong)unaff_R6 + 0x17);
      local_370 = *(undefined1 *)((longlong)unaff_R6 + 0x1f);
      local_368 = (undefined4)unaff_R6[1];
      local_364 = *(undefined2 *)((longlong)unaff_R6 + 0xc);
      local_4a0 = uVar7 - 0x20;
      local_4a8 = unaff_R6 + 4;
      local_2b0 = (char)uVar11;
      cVar5 = local_2b0;
      uStack_2af = (undefined1)((ulonglong)uVar11 >> 8);
      uStack_2ae = (undefined2)((ulonglong)uVar11 >> 0x10);
      uStack_2ac = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar11 = CONCAT17(local_2a8,(int7)((ulonglong)uVar11 >> 8));
      FUN_ram_0000f9d0(&local_2b0,&local_4a8);
      uVar8 = CONCAT71(uStack_2a7,local_2a8);
      uVar6 = uVar8;
      if (CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,CONCAT11(uStack_2af,local_2b0))) == 0) {
        local_350 = CONCAT71(uStack_28f,local_290);
        local_358 = local_298;
        local_360 = local_2a0;
        FUN_ram_0000e030(&local_2b0,&local_4a8);
        uVar14 = uStack_2af;
        uVar6 = CONCAT71(uStack_2a7,local_2a8);
        if (local_2b0 == '\0') {
          FUN_ram_0000d6b0(&local_2b0,&local_4a8);
          if (local_2b0 == '\0') {
            uStack_32c = (undefined3)((uint)uStack_2ac >> 8);
            uStack_330 = CONCAT13((undefined1)uStack_2ac,CONCAT21(uStack_2ae,uStack_2af));
            local_348 = local_2a0;
            local_340 = local_298;
            local_338 = local_290;
            uVar7 = local_4a0;
            unaff_R6 = local_4a8;
            if (local_4a0 < 8) goto LAB_ram_0000ea88;
            uVar2 = CONCAT71(uStack_2a7,local_2a8);
            local_4a0 = local_4a0 - 8;
            uVar10 = *local_4a8;
            local_4a8 = local_4a8 + 1;
            FUN_ram_0000f740(&local_2b0,&local_4a8);
            uVar7 = CONCAT71(uStack_2a7,local_2a8);
            uVar6 = uVar7;
            if (CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,CONCAT11(uStack_2af,local_2b0))) == 0) {
              FUN_ram_0001e430(auStack_328,&local_2a0,0x48);
              FUN_ram_0000f578(&local_2b0,&local_4a8);
              uVar3 = CONCAT71(uStack_2a7,local_2a8);
              uVar6 = uVar3;
              if (CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,CONCAT11(uStack_2af,local_2b0))) == 0) {
                FUN_ram_0001e430(auStack_2e0,&local_2a0,0x30);
                FUN_ram_0000ddf0(&local_2b0,&local_4a8);
                uVar4 = CONCAT71(uStack_2a7,local_2a8);
                uVar6 = uVar4;
                if (CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,CONCAT11(uStack_2af,local_2b0))) == 0) {
                  FUN_ram_0001e430(auStack_150,&local_2a0,0x150);
                  FUN_ram_0000faf0(&local_2b0,&local_4a8);
                  uVar6 = CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,CONCAT11(uStack_2af,local_2b0)));
                  if (local_278 != '\x05') {
                    FUN_ram_0001e430(param_1 + 1,&local_2a8,0x30);
                    *(uint *)((longlong)param_1 + 0x3c) = CONCAT31(uStack_273,uStack_277._3_1_);
                    *(undefined4 *)((longlong)param_1 + 0x39) = uStack_277;
                    *(undefined2 *)((longlong)param_1 + 0x44) = local_47c;
                    *(undefined4 *)(param_1 + 8) = local_480;
                    *(undefined1 *)((longlong)param_1 + 0x5f) = local_488;
                    *(undefined8 *)((longlong)param_1 + 0x57) = local_490;
                    *(undefined8 *)((longlong)param_1 + 0x4f) = local_498;
                    *(undefined2 *)((longlong)param_1 + 100) = local_45c;
                    *(undefined4 *)(param_1 + 0xc) = local_460;
                    *(undefined8 *)((longlong)param_1 + 0x6f) = local_478;
                    *(undefined8 *)((longlong)param_1 + 0x77) = local_470;
                    *(undefined1 *)((longlong)param_1 + 0x7f) = local_468;
                    *(undefined4 *)(param_1 + 0x10) = local_440;
                    *(undefined2 *)((longlong)param_1 + 0x84) = local_43c;
                    *(undefined1 *)((longlong)param_1 + 0x9f) = local_448;
                    *(undefined8 *)((longlong)param_1 + 0x97) = local_450;
                    *(undefined8 *)((longlong)param_1 + 0x8f) = local_458;
                    *(undefined4 *)(param_1 + 0x14) = local_420;
                    *(undefined2 *)((longlong)param_1 + 0xa4) = local_41c;
                    *(undefined8 *)((longlong)param_1 + 0xaf) = local_438;
                    *(undefined8 *)((longlong)param_1 + 0xb7) = local_430;
                    *(undefined1 *)((longlong)param_1 + 0xbf) = local_428;
                    *(undefined4 *)(param_1 + 0x18) = local_400;
                    *(undefined2 *)((longlong)param_1 + 0xc4) = local_3fc;
                    *(undefined8 *)((longlong)param_1 + 0xcf) = local_418;
                    *(undefined1 *)((longlong)param_1 + 0xdf) = local_408;
                    *(undefined8 *)((longlong)param_1 + 0xd7) = local_410;
                    *(undefined2 *)((longlong)param_1 + 0xe4) = local_3dc;
                    *(undefined4 *)(param_1 + 0x1c) = local_3e0;
                    *(undefined8 *)((longlong)param_1 + 0xef) = local_3f8;
                    *(undefined8 *)((longlong)param_1 + 0xf7) = local_3f0;
                    *(undefined1 *)((longlong)param_1 + 0xff) = local_3e8;
                    *(undefined4 *)(param_1 + 0x20) = uStack_3c0;
                    *(uint *)((longlong)param_1 + 0x103) = CONCAT31(uStack_3bc,uStack_3c0._3_1_);
                    *(ulonglong *)((longlong)param_1 + 0x10f) = local_3d8;
                    *(ulonglong *)((longlong)param_1 + 0x117) = local_3d0;
                    *(undefined1 *)((longlong)param_1 + 0x11f) = local_3c8;
                    *(undefined4 *)(param_1 + 0x24) = uStack_3a0;
                    *(uint *)((longlong)param_1 + 0x123) = CONCAT31(uStack_39c,uStack_3a0._3_1_);
                    *(ulonglong *)((longlong)param_1 + 0x12f) = local_3b8;
                    *(ulonglong *)((longlong)param_1 + 0x137) = local_3b0;
                    *(undefined1 *)((longlong)param_1 + 0x13f) = local_3a8;
                    *(undefined4 *)(param_1 + 0x28) = uStack_380;
                    *(uint *)((longlong)param_1 + 0x143) = CONCAT31(uStack_37c,uStack_380._3_1_);
                    *(ulonglong *)((longlong)param_1 + 0x14f) = local_398;
                    *(undefined1 *)((longlong)param_1 + 0x15f) = local_388;
                    *(ulonglong *)((longlong)param_1 + 0x157) = local_390;
                    *(undefined2 *)((longlong)param_1 + 0x1fc) = local_364;
                    *(undefined4 *)(param_1 + 0x3f) = local_368;
                    *(undefined8 *)((longlong)param_1 + 0x207) = local_378;
                    *(undefined1 *)((longlong)param_1 + 0x20f) = local_370;
                    param_1[0x2d] = local_360;
                    param_1[0x2e] = local_358;
                    param_1[0x2f] = local_350;
                    *(undefined4 *)(param_1 + 0x30) = uStack_330;
                    *(uint *)((longlong)param_1 + 0x183) = CONCAT31(uStack_32c,uStack_330._3_1_);
                    *(undefined1 *)((longlong)param_1 + 0x19f) = local_338;
                    *(ulonglong *)((longlong)param_1 + 0x197) = local_340;
                    *(ulonglong *)((longlong)param_1 + 399) = local_348;
                    FUN_ram_0001e430(param_1 + 0x35,auStack_328,0x48);
                    FUN_ram_0001e430(param_1 + 0x44,auStack_2e0,0x30);
                    FUN_ram_0001e430(param_1 + 0x4b,auStack_150,0x150);
                    *(undefined1 *)((longlong)param_1 + 0x3a9) = local_518;
                    *(undefined1 *)(param_1 + 0x75) = local_510;
                    param_1[0x4a] = uVar4;
                    param_1[0x43] = uVar3;
                    param_1[0x42] = uVar10;
                    *(undefined8 *)((longlong)param_1 + 0x1ff) = uVar11;
                    *(char *)((longlong)param_1 + 0x1fe) = cVar5;
                    param_1[0x3e] = uVar9;
                    param_1[0x34] = uVar7;
                    *(undefined8 *)((longlong)param_1 + 0x187) = uVar2;
                    param_1[0x2c] = uVar8;
                    *(undefined8 *)((longlong)param_1 + 0x147) = uVar1;
                    *(undefined8 *)((longlong)param_1 + 0x127) = local_520;
                    *(undefined8 *)((longlong)param_1 + 0x107) = unaff_R9;
                    *(undefined8 *)((longlong)param_1 + 0xe7) = local_508;
                    *(char *)((longlong)param_1 + 0xe6) = (char)local_500;
                    *(undefined8 *)((longlong)param_1 + 199) = unaff_R8;
                    *(char *)((longlong)param_1 + 0xc6) = (char)local_4d0;
                    *(undefined8 *)((longlong)param_1 + 0xa7) = local_4d8;
                    *(char *)((longlong)param_1 + 0xa6) = (char)local_4c0;
                    *(undefined8 *)((longlong)param_1 + 0x87) = local_4f8;
                    *(char *)((longlong)param_1 + 0x86) = (char)local_4f0;
                    *(undefined8 *)((longlong)param_1 + 0x67) = local_4e8;
                    *(char *)((longlong)param_1 + 0x66) = (char)local_4e0;
                    *(undefined8 *)((longlong)param_1 + 0x47) = local_530;
                    *(char *)((longlong)param_1 + 0x46) = (char)local_4c8;
                    *(char *)(param_1 + 7) = local_278;
                    *param_1 = uVar6;
                    goto LAB_ram_0000e858;
                  }
                }
              }
            }
          }
          else {
            uVar6 = CONCAT71(uStack_2a7,local_2a8);
          }
        }
      }
    }
    goto LAB_ram_0000e748;
  }
  lVar15 = *param_2;
  local_4a8 = (ulonglong *)(lVar15 + 8);
  local_4a0 = uVar8 - 8;
  if (local_4a0 < 0x20) {
LAB_ram_0000e710:
    uVar6 = FUN_ram_00015640(&DAT_ram_00024360);
    local_4a0 = 0;
    local_4a8 = (ulonglong *)(lVar15 + uVar8);
  }
  else {
    local_4c8 = *(undefined8 *)(lVar15 + 0xe);
    local_2a8 = *(undefined1 *)(lVar15 + 0x16);
    local_480 = *(undefined4 *)local_4a8;
    local_47c = *(undefined2 *)(lVar15 + 0xc);
    local_2b0 = (char)local_4c8;
    uStack_2af = (undefined1)((ulonglong)local_4c8 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_4c8 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_4c8 >> 0x20);
    local_530 = CONCAT17(local_2a8,(int7)((ulonglong)local_4c8 >> 8));
    local_498 = *(undefined8 *)(lVar15 + 0x17);
    local_490 = *(undefined8 *)(lVar15 + 0x1f);
    local_488 = *(undefined1 *)(lVar15 + 0x27);
    if (uVar8 - 0x28 < 0x20) goto LAB_ram_0000e710;
    local_4e0 = *(undefined8 *)(lVar15 + 0x2e);
    local_2a8 = *(undefined1 *)(lVar15 + 0x36);
    local_460 = *(undefined4 *)(lVar15 + 0x28);
    local_45c = *(undefined2 *)(lVar15 + 0x2c);
    local_2b0 = (char)local_4e0;
    uStack_2af = (undefined1)((ulonglong)local_4e0 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_4e0 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_4e0 >> 0x20);
    local_4e8 = CONCAT17(local_2a8,(int7)((ulonglong)local_4e0 >> 8));
    local_478 = *(undefined8 *)(lVar15 + 0x37);
    local_470 = *(undefined8 *)(lVar15 + 0x3f);
    local_468 = *(undefined1 *)(lVar15 + 0x47);
    if (uVar8 - 0x48 < 0x20) goto LAB_ram_0000e710;
    local_4f0 = *(undefined8 *)(lVar15 + 0x4e);
    local_2a8 = *(undefined1 *)(lVar15 + 0x56);
    local_440 = *(undefined4 *)(lVar15 + 0x48);
    local_43c = *(undefined2 *)(lVar15 + 0x4c);
    local_2b0 = (char)local_4f0;
    uStack_2af = (undefined1)((ulonglong)local_4f0 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_4f0 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_4f0 >> 0x20);
    local_4f8 = CONCAT17(local_2a8,(int7)((ulonglong)local_4f0 >> 8));
    local_458 = *(undefined8 *)(lVar15 + 0x57);
    local_450 = *(undefined8 *)(lVar15 + 0x5f);
    local_448 = *(undefined1 *)(lVar15 + 0x67);
    if (uVar8 - 0x68 < 0x20) goto LAB_ram_0000e710;
    local_4c0 = *(undefined8 *)(lVar15 + 0x6e);
    local_2a8 = *(undefined1 *)(lVar15 + 0x76);
    local_420 = *(undefined4 *)(lVar15 + 0x68);
    local_41c = *(undefined2 *)(lVar15 + 0x6c);
    local_2b0 = (char)local_4c0;
    uStack_2af = (undefined1)((ulonglong)local_4c0 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_4c0 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_4c0 >> 0x20);
    local_4d8 = CONCAT17(local_2a8,(int7)((ulonglong)local_4c0 >> 8));
    local_438 = *(undefined8 *)(lVar15 + 0x77);
    local_430 = *(undefined8 *)(lVar15 + 0x7f);
    local_428 = *(undefined1 *)(lVar15 + 0x87);
    if (uVar8 - 0x88 < 0x20) goto LAB_ram_0000e710;
    local_4d0 = *(undefined8 *)(lVar15 + 0x8e);
    local_2a8 = *(undefined1 *)(lVar15 + 0x96);
    local_400 = *(undefined4 *)(lVar15 + 0x88);
    local_3fc = *(undefined2 *)(lVar15 + 0x8c);
    local_2b0 = (char)local_4d0;
    uStack_2af = (undefined1)((ulonglong)local_4d0 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_4d0 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_4d0 >> 0x20);
    unaff_R8 = CONCAT17(local_2a8,(int7)((ulonglong)local_4d0 >> 8));
    local_418 = *(undefined8 *)(lVar15 + 0x97);
    local_410 = *(undefined8 *)(lVar15 + 0x9f);
    local_408 = *(undefined1 *)(lVar15 + 0xa7);
    if (uVar8 - 0xa8 < 0x20) goto LAB_ram_0000e710;
    local_500 = *(undefined8 *)(lVar15 + 0xae);
    local_2a8 = *(undefined1 *)(lVar15 + 0xb6);
    local_3e0 = *(undefined4 *)(lVar15 + 0xa8);
    local_3dc = *(undefined2 *)(lVar15 + 0xac);
    local_4a0 = uVar8 - 200;
    local_4a8 = (ulonglong *)(lVar15 + 200);
    local_2b0 = (char)local_500;
    uStack_2af = (undefined1)((ulonglong)local_500 >> 8);
    uStack_2ae = (undefined2)((ulonglong)local_500 >> 0x10);
    uStack_2ac = (undefined4)((ulonglong)local_500 >> 0x20);
    local_508 = CONCAT17(local_2a8,(int7)((ulonglong)local_500 >> 8));
    local_3f8 = *(undefined8 *)(lVar15 + 0xb7);
    local_3f0 = *(undefined8 *)(lVar15 + 0xbf);
    local_3e8 = *(undefined1 *)(lVar15 + 199);
    FUN_ram_0000d6b0(&local_2b0,&local_4a8);
    if (local_2b0 != '\0') goto LAB_ram_0000e978;
    uStack_3bc = (undefined3)((uint)uStack_2ac >> 8);
    uStack_3c0 = CONCAT13((undefined1)uStack_2ac,CONCAT21(uStack_2ae,uStack_2af));
    local_3d8 = local_2a0;
    local_3d0 = local_298;
    local_3c8 = local_290;
    if (local_4a0 == 0) {
      uVar6 = FUN_ram_00015640(&DAT_ram_00024360);
    }
    else {
      unaff_R9 = CONCAT71(uStack_2a7,local_2a8);
      local_4a0 = local_4a0 - 1;
      local_510 = (undefined1)*local_4a8;
      local_4a8 = (ulonglong *)((longlong)local_4a8 + 1);
      FUN_ram_0000d500(&local_2b0,&local_4a8);
      local_518 = uStack_2af;
      uVar6 = CONCAT71(uStack_2a7,local_2a8);
      if (local_2b0 == '\0') {
        FUN_ram_0000d6b0(&local_2b0,&local_4a8);
        if (local_2b0 == '\0') {
          uStack_39c = (undefined3)((uint)uStack_2ac >> 8);
          uStack_3a0 = CONCAT13((undefined1)uStack_2ac,CONCAT21(uStack_2ae,uStack_2af));
          local_3b8 = local_2a0;
          local_3b0 = local_298;
          local_3a8 = local_290;
          local_520 = CONCAT71(uStack_2a7,local_2a8);
          FUN_ram_0000d6b0(&local_2b0,&local_4a8);
          if (local_2b0 == '\0') {
            uStack_37c = (undefined3)((uint)uStack_2ac >> 8);
            uStack_380 = CONCAT13((undefined1)uStack_2ac,CONCAT21(uStack_2ae,uStack_2af));
            local_398 = local_2a0;
            local_390 = local_298;
            local_388 = local_290;
            uVar7 = local_4a0;
            unaff_R6 = local_4a8;
            if (7 < local_4a0) goto LAB_ram_0000ea68;
            puVar12 = (ulonglong *)((longlong)local_4a8 + local_4a0);
            uVar6 = FUN_ram_00015640(&DAT_ram_00024360);
            local_4a0 = 0;
            local_4a8 = puVar12;
            goto LAB_ram_0000e748;
          }
        }
LAB_ram_0000e978:
        uVar6 = CONCAT71(uStack_2a7,local_2a8);
      }
    }
  }
LAB_ram_0000e748:
  FUN_ram_000124a0(&local_4b8,0xbbb);
  if ((1 < (uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
    uVar11 = *(undefined8 *)(uVar6 - 1);
    puVar13 = *(undefined8 **)(uVar6 + 7);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)();
    }
    if (puVar13[1] != 0) {
      FUN_ram_0000c6c0(uVar11,puVar13[1],puVar13[2]);
    }
    FUN_ram_0000c6c0(uVar6 - 1,0x18,8);
  }
  param_1[1] = local_4b0;
  *param_1 = local_4b8;
  uVar14 = 2;
LAB_ram_0000e858:
  *(undefined1 *)((longlong)param_1 + 0x3aa) = uVar14;
  return;
}



// ============================================================
// Function: FUN_ram_0000f578
// Address: ram:0000f578
// Size: 456 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_00015640
// ============================================================

void FUN_ram_0000f578(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_10;
  undefined7 uStack_f;
  
  puVar5 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if ((7 < uVar2) && (0x1f < uVar2 - 8)) {
    uVar3 = *puVar5;
    uVar1 = *(undefined1 *)((longlong)puVar5 + 0x16);
    local_10 = (undefined1)*(undefined8 *)((longlong)puVar5 + 0xe);
    uStack_f = (undefined7)((ulonglong)*(undefined8 *)((longlong)puVar5 + 0xe) >> 8);
    if (((uVar2 & 0xfffffffffffffff8) != 0x28) && ((uVar2 & 0xfffffffffffffff8) != 0x30)) {
      uVar6 = puVar5[5];
      uVar4 = puVar5[6];
      param_2[1] = uVar2 - 0x38;
      *param_2 = (longlong)(puVar5 + 7);
      *(undefined2 *)((longlong)param_1 + 0xc) = *(undefined2 *)((longlong)puVar5 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar5 + 1);
      *(undefined8 *)((longlong)param_1 + 0x17) = *(undefined8 *)((longlong)puVar5 + 0x17);
      *(undefined8 *)((longlong)param_1 + 0x1f) = *(undefined8 *)((longlong)puVar5 + 0x1f);
      *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)puVar5 + 0x27);
      param_1[7] = uVar4;
      param_1[6] = uVar6;
      param_1[5] = uVar3;
      *(ulonglong *)((longlong)param_1 + 0xf) = CONCAT17(uVar1,uStack_f);
      *(undefined1 *)((longlong)param_1 + 0xe) = local_10;
      uVar3 = 0;
      goto LAB_ram_0000f730;
    }
  }
  uVar3 = FUN_ram_00015640(&DAT_ram_00024360);
  *param_2 = (longlong)puVar5 + uVar2;
  param_2[1] = 0;
  param_1[1] = uVar3;
  uVar3 = 1;
LAB_ram_0000f730:
  *param_1 = uVar3;
  return;
}



// ============================================================
// Function: FUN_ram_0000f740
// Address: ram:0000f740
// Size: 656 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_00015640
// ============================================================

void FUN_ram_0000f740(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 local_10;
  undefined7 uStack_f;
  
  puVar8 = (undefined8 *)*param_2;
  uVar7 = param_2[1];
  if ((uVar7 < 8) || (uVar7 - 8 < 0x20)) {
LAB_ram_0000f788:
    puVar8 = (undefined8 *)((longlong)puVar8 + uVar7);
  }
  else {
    uVar6 = *puVar8;
    local_10 = (undefined1)*(undefined8 *)((longlong)puVar8 + 0xe);
    uVar5 = local_10;
    uStack_f = (undefined7)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0xe) >> 8);
    if (uVar7 - 0x28 < 0x20) goto LAB_ram_0000f788;
    uVar4 = CONCAT17(*(undefined1 *)((longlong)puVar8 + 0x16),uStack_f);
    uVar1 = *(undefined1 *)((longlong)puVar8 + 0x36);
    local_10 = (undefined1)*(undefined8 *)((longlong)puVar8 + 0x2e);
    uStack_f = (undefined7)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0x2e) >> 8);
    if (uVar7 != 0x48) {
      uVar2 = *(undefined1 *)(puVar8 + 9);
      param_2[1] = uVar7 - 0x49;
      *param_2 = (longlong)puVar8 + 0x49;
      *(undefined2 *)((longlong)param_1 + 0xc) = *(undefined2 *)((longlong)puVar8 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar8 + 1);
      *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)puVar8 + 0x27);
      *(undefined8 *)((longlong)param_1 + 0x1f) = *(undefined8 *)((longlong)puVar8 + 0x1f);
      *(undefined8 *)((longlong)param_1 + 0x17) = *(undefined8 *)((longlong)puVar8 + 0x17);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar8 + 5);
      *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)((longlong)puVar8 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x3f) = *(undefined8 *)((longlong)puVar8 + 0x3f);
      *(undefined8 *)((longlong)param_1 + 0x37) = *(undefined8 *)((longlong)puVar8 + 0x37);
      uVar3 = *(undefined1 *)((longlong)puVar8 + 0x47);
      *(undefined1 *)(param_1 + 10) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0xe) = uVar5;
      *(undefined1 *)((longlong)param_1 + 0x2e) = local_10;
      *(undefined8 *)((longlong)param_1 + 0xf) = uVar4;
      *(ulonglong *)((longlong)param_1 + 0x2f) = CONCAT17(uVar1,uStack_f);
      param_1[9] = uVar6;
      *(undefined1 *)((longlong)param_1 + 0x47) = uVar3;
      uVar6 = 0;
      goto LAB_ram_0000f7c8;
    }
    puVar8 = puVar8 + 9;
  }
  uVar6 = FUN_ram_00015640(&DAT_ram_00024360);
  *param_2 = (longlong)puVar8;
  param_2[1] = 0;
  param_1[1] = uVar6;
  uVar6 = 1;
LAB_ram_0000f7c8:
  *param_1 = uVar6;
  return;
}



// ============================================================
// Function: FUN_ram_0000f9d0
// Address: ram:0000f9d0
// Size: 288 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_00015640
// ============================================================

void FUN_ram_0000f9d0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_2;
  uVar1 = param_2[1];
  if ((((uVar1 < 8) || ((uVar1 & 0xfffffffffffffff8) == 8)) ||
      ((uVar1 & 0xfffffffffffffff8) == 0x10)) || ((uVar1 & 0xfffffffffffffff8) == 0x18)) {
    uVar2 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_2 = (longlong)puVar6 + uVar1;
    param_2[1] = 0;
    param_1[1] = uVar2;
    uVar2 = 1;
  }
  else {
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    param_2[1] = uVar1 - 0x20;
    *param_2 = (longlong)(puVar6 + 4);
    param_1[4] = uVar5;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[1] = uVar2;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}



// ============================================================
// Function: FUN_ram_0000faf0
// Address: ram:0000faf0
// Size: 1216 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_0000d378, FUN_ram_00015640, FUN_ram_00017768
// ============================================================

void FUN_ram_0000faf0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  byte local_79;
  char *apcStack_78 [3];
  byte local_59;
  byte *local_58;
  undefined1 *local_50;
  undefined *local_40;
  undefined8 local_38;
  byte **local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte *local_10;
  undefined1 *local_8;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    lVar2 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_1 = lVar2;
    *(undefined1 *)(param_1 + 7) = 5;
    return;
  }
  pbVar5 = (byte *)*param_2;
  lVar2 = uVar1 - 1;
  local_79 = *pbVar5;
  param_2[1] = lVar2;
  *param_2 = pbVar5 + 1;
  bVar6 = 4;
  if (local_79 == 0) {
LAB_ram_0000fe00:
    param_1[6] = param_4;
    param_1[5] = param_5;
    param_1[4] = local_88;
    *(byte *)(param_1 + 3) = local_a0;
    param_1[2] = local_98;
    param_1[1] = local_90;
    *param_1 = lVar2;
    *(byte *)(param_1 + 7) = bVar6;
    return;
  }
  if (local_79 != 1) {
    local_30 = &local_58;
    local_50 = &LAB_ram_0000d418;
    local_58 = &local_79;
    ppbVar4 = (byte **)apcStack_78;
LAB_ram_0000fbf0:
    local_20 = 0;
    local_28 = 1;
    local_38 = 1;
    local_40 = &DAT_ram_00024400;
    FUN_ram_00017768(ppbVar4,&local_40);
    lVar2 = FUN_ram_0000d378(ppbVar4);
    goto LAB_ram_0000fee0;
  }
  if (uVar1 < 9) {
LAB_ram_0000fe68:
    lVar2 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_2 = pbVar5 + uVar1;
  }
  else {
    uVar3 = uVar1 - 9;
    if ((uVar3 < 8) || ((uVar3 & 0xfffffffffffffff8) == 8)) {
      pbVar7 = pbVar5 + uVar1;
    }
    else {
      pbVar7 = pbVar5 + 0x19;
      if (uVar3 != 0x10) {
        if ((7 < uVar1 - 0x1a) && ((uVar1 - 0x1a & 0xfffffffffffffff8) != 8)) {
          lVar2 = *(longlong *)(pbVar5 + 1);
          local_90 = *(longlong *)(pbVar5 + 9);
          local_98 = *(longlong *)(pbVar5 + 0x11);
          local_a0 = *pbVar7;
          param_5 = *(longlong *)(pbVar5 + 0x1a);
          param_4 = *(longlong *)(pbVar5 + 0x22);
          *param_2 = pbVar5 + 0x2a;
          param_2[1] = uVar1 - 0x2a;
          if (uVar1 - 0x2a == 0) {
            lVar2 = FUN_ram_00015640(&DAT_ram_00024360);
            goto LAB_ram_0000fee0;
          }
          bVar6 = pbVar5[0x2a];
          *param_2 = pbVar5 + 0x2b;
          param_2[1] = uVar1 - 0x2b;
          local_59 = bVar6;
          if (3 < bVar6) {
            local_30 = &local_10;
            local_8 = &LAB_ram_0000d418;
            local_10 = &local_59;
            ppbVar4 = &local_58;
            goto LAB_ram_0000fbf0;
          }
          if (7 < uVar1 - 0x2b) {
            local_88 = *(longlong *)(pbVar5 + 0x2b);
            param_2[1] = uVar1 - 0x33;
            *param_2 = pbVar5 + 0x33;
            goto LAB_ram_0000fe00;
          }
        }
        goto LAB_ram_0000fe68;
      }
    }
    lVar2 = FUN_ram_00015640(&DAT_ram_00024360);
    *param_2 = pbVar7;
  }
  param_2[1] = 0;
LAB_ram_0000fee0:
  *param_1 = lVar2;
  *(undefined1 *)(param_1 + 7) = 5;
  return;
}



// ============================================================
// Function: FUN_ram_0000ffb0
// Address: ram:0000ffb0
// Size: 264 bytes
// Called by: FUN_ram_00010230, FUN_ram_000100b8
// Calls: FUN_ram_0000c5f0, FUN_ram_0000c6c8
// ============================================================

void FUN_ram_0000ffb0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((param_4[1] == 0) || (param_4[2] == 0)) {
    uVar2 = param_2;
    if (param_3 != 0) {
      uVar2 = FUN_ram_0000c5f0(param_3,param_2);
    }
  }
  else {
    uVar1 = FUN_ram_0000c6c8(*param_4,param_4[2],param_2,param_3);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
  }
  param_1[2] = param_3;
  if (uVar2 != 0) {
    param_2 = uVar2;
  }
  param_1[1] = param_2;
  *param_1 = (ulonglong)(uVar2 == 0);
  return;
}



// ============================================================
// Function: FUN_ram_000100b8
// Address: ram:000100b8
// Size: 376 bytes
// Called by: FUN_ram_00010760
// Calls: FUN_ram_000176b0, FUN_ram_0000ffb0
// ============================================================

void FUN_ram_000100b8(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong unaff_R6;
  ulonglong *unaff_R7;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  longlong local_8;
  
  uVar2 = 0;
  uVar3 = *param_1;
  if (uVar3 != 0xffffffffffffffff) {
    param_2 = uVar3 + 1;
    uVar1 = uVar3 << 1;
    if (uVar3 << 1 <= param_2) {
      uVar1 = param_2;
    }
    unaff_R6 = uVar1;
    if (uVar1 < 5) {
      unaff_R6 = 4;
    }
    if ((uVar1 < 0x2000000000000000) && (unaff_R6 << 3 < 0x7ffffffffffffff9)) {
      local_10 = 0;
      if (uVar3 != 0) {
        local_18 = param_1[1];
        local_8 = uVar3 << 3;
        local_10 = 8;
      }
      FUN_ram_0000ffb0(&local_30,8,unaff_R6 << 3,&local_18);
      param_2 = local_20;
      uVar2 = local_28;
      unaff_R7 = param_1;
      if (local_30 != 1) goto LAB_ram_00010210;
    }
  }
  param_1 = unaff_R7;
  FUN_ram_000176b0(uVar2,param_2,&DAT_ram_00024458);
LAB_ram_00010210:
  *param_1 = unaff_R6;
  param_1[1] = local_28;
  return;
}



// ============================================================
// Function: FUN_ram_00010230
// Address: ram:00010230
// Size: 352 bytes
// Called by: FUN_ram_00010b78, FUN_ram_000103b0
// Calls: FUN_ram_000176b0, FUN_ram_0000ffb0
// ============================================================

void FUN_ram_00010230(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_R7;
  ulonglong *unaff_R8;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  uVar3 = 0;
  uVar4 = *param_1;
  uVar2 = param_2;
  if (uVar4 != 0xffffffffffffffff) {
    uVar2 = uVar4 + 1;
    uVar1 = uVar4 << 1;
    unaff_R7 = uVar1;
    if (uVar1 <= uVar2) {
      unaff_R7 = uVar2;
    }
    if (unaff_R7 < 5) {
      unaff_R7 = 4;
    }
    if (-1 < (longlong)unaff_R7) {
      unaff_R8 = (ulonglong *)0x7ffffffffffffffe;
      if (unaff_R7 << 1 < 0x7fffffffffffffff) {
        local_10 = 0;
        if (uVar4 != 0) {
          local_18 = param_1[1];
          local_10 = 2;
          local_8 = uVar1;
        }
        FUN_ram_0000ffb0(&local_30,2,unaff_R7 << 1,&local_18);
        uVar2 = local_20;
        uVar3 = local_28;
        unaff_R8 = param_1;
        if (local_30 != 1) goto LAB_ram_00010370;
      }
    }
  }
  param_1 = unaff_R8;
  FUN_ram_000176b0(uVar3,uVar2,param_2);
LAB_ram_00010370:
  *param_1 = unaff_R7;
  param_1[1] = local_28;
  return;
}



// ============================================================
// Function: FUN_ram_00010390
// Address: ram:00010390
// Size: 32 bytes
// Called by: entrypoint
// ============================================================

longlong FUN_ram_00010390(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x165;
  if (param_1 != 0x163) {
    lVar1 = param_1;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_000103b0
// Address: ram:000103b0
// Size: 944 bytes
// Called by: entrypoint
// Calls: FUN_ram_0000c6c0, FUN_ram_00010230, FUN_ram_0001baa0
// ============================================================

void FUN_ram_000103b0(longlong *param_1,longlong param_2,undefined *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  ushort *local_40;
  longlong local_38;
  longlong local_18;
  longlong local_10;
  longlong local_8;
  
  local_38 = 2;
  lVar5 = 0;
  local_8 = 0;
  local_10 = 2;
  local_18 = 0;
  lVar7 = 0;
  puVar3 = (undefined *)0x0;
  puVar4 = param_3;
  uVar2 = 2;
  do {
    if (puVar4 <= puVar3) {
LAB_ram_00010430:
      param_1[2] = local_8;
      param_1[1] = local_10;
      *param_1 = local_18;
      param_1[3] = (longlong)puVar3;
      return;
    }
    puVar8 = (undefined *)0xffffffffffffffff;
    if (puVar3 <= puVar3 + 4) {
      puVar8 = puVar3 + 4;
    }
    puVar6 = (undefined *)0xffffffffffffffff;
    if (puVar3 <= puVar3 + 2) {
      puVar6 = puVar3 + 2;
    }
    if (param_3 < puVar6) goto LAB_ram_00010430;
    if (((longlong)puVar6 - (longlong)puVar3 != 2) ||
       (uVar1 = *(ushort *)(puVar3 + param_2), 0x1b < uVar1)) {
      *(ushort *)(param_1 + 2) = uVar2;
      lVar5 = -0x7ffffffffffffffd;
      goto LAB_ram_00010708;
    }
    if (uVar1 == 0) goto LAB_ram_00010430;
    if (param_3 < puVar8) break;
    if (lVar7 == local_18) {
      FUN_ram_00010230(&local_18,&DAT_ram_00024428);
      local_38 = local_10;
    }
    *(ushort *)(local_38 + lVar5) = uVar1;
    lVar7 = lVar7 + 1;
    puVar4 = param_3;
    local_8 = lVar7;
    if (puVar8 < puVar6) {
      puVar4 = &DAT_ram_00024440;
      FUN_ram_0001baa0(puVar6,puVar8);
    }
    if ((longlong)puVar8 - (longlong)puVar6 != 2) {
      param_1[2] = (longlong)local_40;
      lVar5 = -0x7fffffffffffffff;
      goto LAB_ram_00010708;
    }
    local_40 = (ushort *)(puVar6 + param_2);
    puVar3 = (undefined *)0xffffffffffffffff;
    if (puVar8 <= puVar8 + *local_40) {
      puVar3 = puVar8 + *local_40;
    }
    lVar5 = lVar5 + 2;
    uVar2 = uVar1;
  } while (puVar3 <= puVar4);
  lVar5 = -0x7ffffffffffffffd;
LAB_ram_00010708:
  param_1[1] = lVar5;
  *param_1 = -0x8000000000000000;
  if (local_18 != 0) {
    FUN_ram_0000c6c0(local_10,local_18 << 1,2);
  }
  return;
}



// ============================================================
// Function: FUN_ram_00010760
// Address: ram:00010760
// Size: 1048 bytes
// Called by: entrypoint
// Calls: FUN_ram_0000c6c0, FUN_ram_000100b8
// ============================================================

void FUN_ram_00010760(undefined8 *param_1,short *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  short *psVar8;
  short *psVar9;
  longlong local_18;
  longlong local_10;
  longlong local_8;
  
  lVar4 = 0;
  lVar2 = 8;
  local_8 = 0;
  local_10 = 8;
  local_18 = 0;
  if (param_3 != 0) {
    lVar7 = 0;
    psVar8 = param_2;
    do {
      psVar9 = psVar8 + 1;
      lVar4 = 0;
      do {
        if (lVar7 << 3 == lVar4) {
          if (lVar7 == local_18) {
            FUN_ram_000100b8(&local_18);
            lVar2 = local_10;
          }
          *(short **)(lVar2 + lVar7 * 8) = psVar8;
          lVar7 = lVar7 + 1;
          local_8 = lVar7;
          break;
        }
        puVar5 = (undefined8 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 8;
      } while (*(short *)*puVar5 != *psVar8);
      psVar8 = psVar9;
    } while (psVar9 != param_2 + param_3);
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar2 = 0;
      do {
        uVar1 = **(ushort **)(local_10 + lVar2);
        if (uVar1 < 0xe) {
          if (uVar1 < 7) {
            if (uVar1 < 3) {
              if (uVar1 == 0) goto LAB_ram_00010ab0;
              if (uVar1 == 1) {
                lVar6 = 0x70;
              }
              else {
                lVar6 = 0xc;
              }
            }
            else if (uVar1 < 5) {
              if (uVar1 == 3) {
LAB_ram_00010a98:
                lVar6 = 0x24;
              }
              else {
                lVar6 = 0x45;
              }
            }
            else {
              if (uVar1 != 5) goto LAB_ram_00010a88;
              lVar6 = 299;
            }
          }
          else {
            if (uVar1 < 10) {
              if ((uVar1 != 7) && (uVar1 == 8)) {
LAB_ram_00010a88:
                lVar6 = 5;
                goto LAB_ram_00010908;
              }
            }
            else {
              if (uVar1 < 0xc) {
                if (uVar1 == 10) {
                  lVar6 = 0x38;
                  goto LAB_ram_00010908;
                }
                goto LAB_ram_00010a88;
              }
              if (uVar1 == 0xc) goto LAB_ram_00010a98;
            }
LAB_ram_00010ab0:
            lVar6 = 4;
          }
        }
        else if (uVar1 < 0x15) {
          if (uVar1 < 0x11) {
            if (uVar1 != 0xe) {
              if (uVar1 == 0xf) goto LAB_ram_00010a88;
              lVar6 = 0x85;
              goto LAB_ram_00010908;
            }
          }
          else if ((0x12 < uVar1) && (uVar1 != 0x14)) {
            uVar3 = 0x8000000000000001;
            goto LAB_ram_00010b40;
          }
LAB_ram_00010900:
          lVar6 = 0x44;
        }
        else if (uVar1 < 0x18) {
          if (uVar1 == 0x15) {
            lVar6 = 0x54;
          }
          else {
            if (uVar1 == 0x16) goto LAB_ram_00010900;
            lVar6 = 0x4c;
          }
        }
        else if (uVar1 < 0x1a) {
          if (uVar1 == 0x18) {
            lVar6 = 200;
          }
          else {
            lVar6 = 0x3c;
          }
        }
        else {
          if (uVar1 != 0x1a) goto LAB_ram_00010ab0;
          lVar6 = 0x25;
        }
LAB_ram_00010908:
        lVar4 = lVar6 + lVar4;
        lVar2 = lVar2 + 8;
      } while (lVar7 << 3 != lVar2);
    }
  }
  param_1[1] = lVar4;
  uVar3 = 0x800000000000001a;
LAB_ram_00010b40:
  *param_1 = uVar3;
  if (local_18 != 0) {
    FUN_ram_0000c6c0(local_10,local_18 << 3,8);
  }
  return;
}



// ============================================================
// Function: FUN_ram_00010b78
// Address: ram:00010b78
// Size: 872 bytes
// Called by: entrypoint
// Calls: FUN_ram_00010230
// ============================================================

void FUN_ram_00010b78(longlong *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  longlong local_10;
  longlong local_8;
  
  local_8 = 0;
  local_10 = 2;
  local_18 = 0;
  if (param_3 != 0) {
    lVar4 = 0;
    lVar2 = 2;
    param_3 = param_3 << 1;
    do {
      uVar1 = *param_2;
      if (uVar1 < 0xe) {
        if (uVar1 == 1) {
          if (lVar4 == local_18) {
            FUN_ram_00010230(&local_18,&DAT_ram_00024470);
          }
          *(undefined2 *)(local_10 + lVar4 * 2) = 2;
          lVar2 = local_10;
          goto LAB_ram_00010e80;
        }
        if (uVar1 == 9) {
          if (lVar4 == local_18) {
            FUN_ram_00010230(&local_18,&DAT_ram_00024488);
          }
          *(undefined2 *)(local_10 + lVar4 * 2) = 0xd;
          lVar2 = lVar4 + 1;
          if (lVar2 == local_18) {
            local_8 = lVar2;
            FUN_ram_00010230(&local_18,&DAT_ram_000244a0);
          }
          *(undefined2 *)(local_10 + lVar2 * 2) = 7;
          lVar3 = 2;
          lVar2 = local_10;
          goto LAB_ram_00010e88;
        }
      }
      else {
        if (uVar1 == 0xe) {
          if (lVar4 == local_18) {
            FUN_ram_00010230(&local_18,&DAT_ram_000244b8);
          }
          *(undefined2 *)(local_10 + lVar4 * 2) = 0xf;
          lVar2 = local_10;
        }
        else {
          if (uVar1 != 0x1a) goto LAB_ram_00010bd0;
          if (lVar4 == local_18) {
            FUN_ram_00010230(&local_18,&DAT_ram_000244d0);
            lVar2 = local_10;
          }
          *(undefined2 *)(lVar2 + lVar4 * 2) = 0x1b;
        }
LAB_ram_00010e80:
        lVar3 = 1;
LAB_ram_00010e88:
        lVar4 = lVar4 + lVar3;
        local_8 = lVar4;
      }
LAB_ram_00010bd0:
      param_2 = param_2 + 1;
      param_3 = param_3 + -2;
    } while (param_3 != 0);
  }
  param_1[2] = local_8;
  param_1[1] = local_10;
  *param_1 = local_18;
  return;
}



// ============================================================
// Function: FUN_ram_00010f08
// Address: ram:00010f08
// Size: 16 bytes
// Called by: FUN_ram_000126f0
// Calls: FUN_ram_00019700
// ============================================================

void FUN_ram_00010f08(void)

{
  FUN_ram_00019700();
  return;
}



// ============================================================
// Function: FUN_ram_00010f48
// Address: ram:00010f48
// Size: 256 bytes
// Called by: FUN_ram_000118b0
// Calls: FUN_ram_0000c5f0, FUN_ram_0001a760, FUN_ram_0001e430, FUN_ram_000176b0
// ============================================================

void FUN_ram_00010f48(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (-1 < param_3) {
    lVar2 = 1;
    if (param_3 != 0) {
      lVar2 = FUN_ram_0000c5f0(param_3,1);
      uVar1 = 1;
      if (lVar2 == 0) goto LAB_ram_00010ff8;
    }
    FUN_ram_0001e430(lVar2,param_2);
    param_1[1] = lVar2;
    param_1[2] = param_3;
    *param_1 = param_3;
    return;
  }
LAB_ram_00010ff8:
  FUN_ram_000176b0(uVar1,param_3,&DAT_ram_000244e8);
  FUN_ram_0001a760(param_3,
                   "Error/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFal..." /* TRUNCATED STRING LITERAL */
                   ,5);
  return;
}



// ============================================================
// Function: FUN_ram_000118b0
// Address: ram:000118b0
// Size: 3056 bytes
// Called by: FUN_ram_000124a0
// Calls: FUN_ram_00010f48
// ============================================================

void FUN_ram_000118b0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  if (uVar1 < 0x7ee) {
    if (0x7da < uVar1) {
      if (uVar1 < 0x7e4) {
        if (uVar1 < 0x7df) {
          if (uVar1 < 0x7dd) {
            if (uVar1 == 0x7db) {
              pcVar2 = 
              "ConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constr..." /* TRUNCATED STRING LITERAL */
              ;
              uVar3 = 0xf;
            }
            else {
              pcVar2 = 
              "ConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension..." /* TRUNCATED STRING LITERAL */
              ;
              uVar3 = 0x11;
            }
          }
          else if (uVar1 == 0x7dd) {
            pcVar2 = 
            "ConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close autho..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0xe;
          }
          else {
            pcVar2 = 
            "ConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was vi..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x13;
          }
        }
        else if (uVar1 < 0x7e1) {
          if (uVar1 == 0x7df) {
            pcVar2 = 
            "ConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extensi..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x14;
          }
          else {
            pcVar2 = 
            "ConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x1b;
          }
        }
        else if (uVar1 == 0x7e1) {
          pcVar2 = 
          "ConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension dele..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1d;
        }
        else if (uVar1 == 0x7e2) {
          pcVar2 = 
          "ConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent d..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x16;
        }
        else {
          pcVar2 = 
          "ConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violat..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0xf;
        }
      }
      else if (uVar1 < 0x7e9) {
        if (uVar1 < 0x7e6) {
          if (uVar1 == 0x7e4) {
            pcVar2 = 
            "ConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extensio..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x17;
          }
          else {
            pcVar2 = 
            "ConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was viola..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x1b;
          }
        }
        else if (uVar1 == 0x7e6) {
          pcVar2 = 
          "ConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension auth..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1a;
        }
        else if (uVar1 == 0x7e7) {
          pcVar2 = 
          "ConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was v..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x25;
        }
        else {
          pcVar2 = 
          "ConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transf..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x23;
        }
      }
      else if (uVar1 < 0x7eb) {
        if (uVar1 == 0x7e9) {
          pcVar2 = 
          "ConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression ..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x2c;
        }
        else {
          pcVar2 = 
          "ConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x2f;
        }
      }
      else if (uVar1 == 0x7eb) {
        pcVar2 = 
        "ConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x29;
      }
      else if (uVar1 == 0x7ec) {
        pcVar2 = 
        "ConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was viola..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x32;
      }
      else {
        pcVar2 = 
        "ConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expressi..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x36;
      }
      goto LAB_ram_00012270;
    }
    if (uVar1 < 0x7d1) {
      if (uVar1 < 1000) {
        if (uVar1 < 0x66) {
          if (uVar1 == 100) {
            pcVar2 = 
            "InstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was violatedA group member pointer extension group address constraint was violatedA group member pointer e..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x12;
          }
          else {
            pcVar2 = 
            "InstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was violatedA group member pointer extension group address constraint was viola..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x1b;
          }
        }
        else if (uVar1 == 0x66) {
          pcVar2 = 
          "InstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was violatedA group member pointer extension group ..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1c;
        }
        else {
          pcVar2 = 
          "InstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was violatedA group membe..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1a;
        }
      }
      else if (uVar1 < 0x3ea) {
        if (uVar1 == 1000) {
          pcVar2 = 
          "IdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was vio..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x12;
        }
        else {
          pcVar2 = 
          "IdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer ..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1c;
        }
      }
      else if (uVar1 == 0x3ea) {
        pcVar2 = 
        "IdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x12;
      }
      else if (uVar1 == 0x5dc) {
        pcVar2 = 
        "EventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority cons..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x14;
      }
      else {
        pcVar2 = 
        "ConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension a..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0xd;
      }
      goto LAB_ram_00012270;
    }
    if (uVar1 < 0x7d6) {
      if (uVar1 < 0x7d3) {
        if (uVar1 == 0x7d1) {
          pcVar2 = 
          "ConstraintHasOneConstraintSigneralloc/src/fmt.rsconnection reset) when slicing `entity not foundhost unreachableinvalid filenamerange end index \x01"
          ;
          uVar3 = 0x10;
        }
        else {
          pcVar2 = 
          "ConstraintSigneralloc/src/fmt.rsconnection reset) when slicing `entity not foundhost unreachableinvalid filenamerange end index \x01"
          ;
          uVar3 = 0x10;
        }
      }
      else if (uVar1 == 0x7d3) {
        pcVar2 = 
        "ConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointe..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0xd;
      }
      else if (uVar1 == 0x7d4) {
        pcVar2 = 
        "ConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA ..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0xf;
      }
      else {
        pcVar2 = 
        "ConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address const..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x14;
      }
      goto LAB_ram_00012270;
    }
    if (uVar1 < 0x7d8) {
      if (uVar1 == 0x7d6) {
        pcVar2 = 
        "ConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadat..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0xf;
      }
      else {
        pcVar2 = 
        "ConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata point..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x14;
      }
      goto LAB_ram_00012270;
    }
    if (uVar1 == 0x7d8) {
      pcVar2 = 
      "ConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA..." /* TRUNCATED STRING LITERAL */
      ;
      uVar3 = 0xf;
      goto LAB_ram_00012270;
    }
    if (uVar1 == 0x7d9) {
      pcVar2 = 
      "ConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority cons..." /* TRUNCATED STRING LITERAL */
      ;
      uVar3 = 0x14;
      goto LAB_ram_00012270;
    }
    pcVar2 = 
    "ConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violat..." /* TRUNCATED STRING LITERAL */
    ;
  }
  else {
    if (uVar1 < 0xbba) {
      if (uVar1 < 0x7f7) {
        if (uVar1 < 0x7f2) {
          if (uVar1 < 0x7f0) {
            if (uVar1 == 0x7ee) {
              pcVar2 = 
              "ConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expres..." /* TRUNCATED STRING LITERAL */
              ;
              uVar3 = 0x26;
            }
            else {
              pcVar2 = 
              "ConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was ..." /* TRUNCATED STRING LITERAL */
              ;
              uVar3 = 0x2f;
            }
          }
          else if (uVar1 == 0x7f0) {
            pcVar2 = 
            "ConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator w..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x35;
          }
          else {
            pcVar2 = 
            "ConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not matc..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x25;
          }
        }
        else if (uVar1 < 0x7f4) {
          if (uVar1 == 0x7f2) {
            pcVar2 = 
            "ConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x2e;
          }
          else {
            pcVar2 = 
            "ConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to se..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x28;
          }
        }
        else if (uVar1 == 0x7f4) {
          pcVar2 = 
          "ConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough a..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x30;
        }
        else if (uVar1 == 0x7f5) {
          pcVar2 = 
          "ConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a differen..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x23;
        }
        else {
          pcVar2 = 
          "ConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expe..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x2c;
        }
      }
      else if (uVar1 < 0x9c8) {
        if (uVar1 < 0x9c5) {
          if (uVar1 == 0x7f7) {
            pcVar2 = 
            "ConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x2c;
          }
          else {
            pcVar2 = 
            "RequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not sign..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0xf;
          }
        }
        else if (uVar1 == 0x9c5) {
          pcVar2 = 
          "RequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given acc..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x11;
        }
        else if (uVar1 == 0x9c6) {
          pcVar2 = 
          "RequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x15;
        }
        else {
          pcVar2 = 
          "RequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not o..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x12;
        }
      }
      else if (uVar1 < 0x9ca) {
        if (uVar1 == 0x9c8) {
          pcVar2 = 
          "RequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe ..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x16;
        }
        else {
          pcVar2 = 
          "RequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be alread..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x11;
        }
      }
      else if (uVar1 == 0x9ca) {
        pcVar2 = 
        "RequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this ac..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x12;
      }
      else if (uVar1 == 3000) {
        pcVar2 = 
        "AccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accou..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x1e;
      }
      else {
        pcVar2 = 
        "AccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x1c;
      }
      goto LAB_ram_00012270;
    }
    if (uVar1 < 0xbc4) {
      if (uVar1 < 0xbbf) {
        if (0xbbb < uVar1) {
          if (uVar1 == 0xbbc) {
            pcVar2 = 
            "AccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sy..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x16;
          }
          else if (uVar1 == 0xbbd) {
            pcVar2 = 
            "AccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not m..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x14;
          }
          else {
            pcVar2 = 
            "AccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given publ..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x11;
          }
          goto LAB_ram_00012270;
        }
        if (uVar1 == 0xbba) {
          pcVar2 = 
          "AccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated to..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1c;
          goto LAB_ram_00012270;
        }
        pcVar2 = 
        "AccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account ..." /* TRUNCATED STRING LITERAL */
        ;
      }
      else {
        if (uVar1 < 0xbc1) {
          if (uVar1 == 0xbbf) {
            pcVar2 = 
            "AccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_IN..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x1a;
          }
          else {
            pcVar2 = &DAT_ram_00020c90;
            uVar3 = 0x10;
          }
          goto LAB_ram_00012270;
        }
        if (uVar1 != 0xbc1) {
          if (uVar1 == 0xbc2) {
            pcVar2 = &DAT_ram_00020c60;
            uVar3 = 0x10;
          }
          else {
            pcVar2 = 
            "AccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account r..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x15;
          }
          goto LAB_ram_00012270;
        }
        pcVar2 = 
        "InvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds t..." /* TRUNCATED STRING LITERAL */
        ;
      }
    }
    else {
      if (uVar1 < 0xbc9) {
        if (uVar1 < 0xbc6) {
          if (uVar1 == 0xbc4) {
            pcVar2 = 
            "AccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one real..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x15;
          }
          else {
            pcVar2 = 
            "AccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated f..." /* TRUNCATED STRING LITERAL */
            ;
            uVar3 = 0x15;
          }
        }
        else if (uVar1 == 0xbc6) {
          pcVar2 = &DAT_ram_00020a00;
          uVar3 = 0x20;
        }
        else if (uVar1 == 0xbc7) {
          pcVar2 = 
          "AccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe acc..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x15;
        }
        else {
          pcVar2 = 
          "AccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match th..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x1a;
        }
        goto LAB_ram_00012270;
      }
      if (uVar1 < 0x1005) {
        if (uVar1 != 0xbc9) {
          pcVar2 = 
          "DeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x19;
          goto LAB_ram_00012270;
        }
        pcVar2 = 
        "AccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared prog..." /* TRUNCATED STRING LITERAL */
        ;
      }
      else {
        if (uVar1 == 0x1005) {
          pcVar2 = 
          "TryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initiali..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x21;
          goto LAB_ram_00012270;
        }
        if (uVar1 != 0x1006) {
          pcVar2 = 
          "DeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conver..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 10;
          goto LAB_ram_00012270;
        }
        pcVar2 = 
        "InvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstructionInvalidProgramIdlInstructionStubInstructionDidNotSerializeInstructionDidNotDeserializeInstructionFallbackNotFoundInstructionMissinga Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou ca..." /* TRUNCATED STRING LITERAL */
        ;
      }
    }
  }
  uVar3 = 0x18;
LAB_ram_00012270:
  FUN_ram_00010f48(param_1,pcVar2,uVar3);
  return;
}



// ============================================================
// Function: FUN_ram_000124a0
// Address: ram:000124a0
// Size: 592 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_0000c5f0, FUN_ram_000118b0, FUN_ram_00018308, FUN_ram_000126f0, FUN_ram_000176d0
// ============================================================

void FUN_ram_000124a0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 *local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined1 uStack_1;
  
  local_ac = param_2;
  FUN_ram_000118b0(&local_78,&local_ac);
  local_50 = 0;
  local_58 = 1;
  local_60 = 0;
  local_20 = &DAT_ram_00024530;
  local_28 = &local_60;
  local_10 = 3;
  local_18 = 0x20;
  local_38 = 0;
  local_48[0] = 0;
  lVar1 = FUN_ram_000126f0(&local_ac,local_48);
  if (lVar1 == 0) {
    local_98 = local_50;
    local_a0 = local_58;
    local_a8 = local_60;
    local_90 = local_78;
    local_88 = local_70;
    local_80 = local_68;
    puVar2 = (undefined8 *)FUN_ram_0000c5f0(0xa0,8);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_ram_000176d0(8,0xa0);
    }
    *puVar2 = 2;
    puVar2[4] = local_90;
    puVar2[5] = local_88;
    puVar2[6] = local_80;
    puVar2[7] = local_a8;
    puVar2[8] = local_a0;
    puVar2[9] = local_98;
    *(undefined4 *)(puVar2 + 0x13) = param_2;
    *(undefined1 *)(puVar2 + 10) = 2;
    param_1[1] = puVar2;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_00018308("a Display implementation returned an error unexpectedlyThe API being used is deprecated and should no longer be usedError during numeric conversionYou cannot/should not initialize the payer account as a program accountThe declared program id does not match the actual program idThe account was duplicated for more than one reallocationThe account reallocation exceeds the MAX_PERMITTED_DATA_INCREASE limitThe given public key does not match the required sysvarThe given account is not the associated token accountThe given account is not a program data accountThe program expected this account to be already initializedThe given account is not owned by the system programThe given account did not signProgram account is not executableProgram ID was not as expectedThe given account is owned by a different program than expectedNot enough account keys given to the instructionFailed to serialize the accountFailed to deserialize the accountAccount discriminator did not match what was expectedNo discriminator was found on the accountThe account discriminator was already set on this accountA require_gte expression was violatedA require_gt expression was violatedA require_keys_neq expression was violatedA require_neq expression was violatedA require_keys_eq expression was violatedA require_eq expression was violatedA require expression was violatedA transfer hook extension transfer hook program id constraint was violatedA transfer hook extension authority constraint was violatedA transfer hook extension constraint was violatedA permanent delegate extension delegate constraint was violatedA permanent delegate extension constraint was violatedA close authority extension authority constraint was violatedA close authority constraint was violatedA metadata pointer extension metadata address constraint was violatedA metadata pointer extension authority constraint was violatedA metadata pointer extension constraint was violatedA group member pointer extension group address constraint was violatedA group member pointer extension authority..." /* TRUNCATED STRING LITERAL */
                   ,0x37,&uStack_1,&DAT_ram_00024560,&DAT_ram_00024580);
}



// ============================================================
// Function: FUN_ram_000126f0
// Address: ram:000126f0
// Size: 2552 bytes
// Called by: FUN_ram_000124a0
// Calls: FUN_ram_00010f08
// ============================================================

void FUN_ram_000126f0(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *param_1;
  if (uVar1 < 0x7ee) {
    if (uVar1 < 0x7db) {
      if (uVar1 < 0x7d1) {
        if (uVar1 < 1000) {
          if (uVar1 < 0x66) {
            if (uVar1 == 100) {
              local_30 = &DAT_ram_00024a58;
            }
            else {
              local_30 = &DAT_ram_00024a48;
            }
          }
          else if (uVar1 == 0x66) {
            local_30 = &DAT_ram_00024a38;
          }
          else {
            local_30 = &DAT_ram_00024a28;
          }
        }
        else if (uVar1 < 0x3ea) {
          if (uVar1 == 1000) {
            local_30 = &DAT_ram_00024a18;
          }
          else {
            local_30 = &DAT_ram_00024a08;
          }
        }
        else if (uVar1 == 0x3ea) {
          local_30 = &DAT_ram_000249f8;
        }
        else if (uVar1 == 0x5dc) {
          local_30 = &DAT_ram_000249e8;
        }
        else {
          local_30 = &DAT_ram_000249d8;
        }
      }
      else if (uVar1 < 0x7d6) {
        if (uVar1 < 0x7d3) {
          if (uVar1 == 0x7d1) {
            local_30 = &DAT_ram_000249c8;
          }
          else {
            local_30 = &DAT_ram_000249b8;
          }
        }
        else if (uVar1 == 0x7d3) {
          local_30 = &DAT_ram_000249a8;
        }
        else if (uVar1 == 0x7d4) {
          local_30 = &DAT_ram_00024998;
        }
        else {
          local_30 = &DAT_ram_00024988;
        }
      }
      else if (uVar1 < 0x7d8) {
        if (uVar1 == 0x7d6) {
          local_30 = &DAT_ram_00024978;
        }
        else {
          local_30 = &DAT_ram_00024968;
        }
      }
      else if (uVar1 == 0x7d8) {
        local_30 = &DAT_ram_00024958;
      }
      else if (uVar1 == 0x7d9) {
        local_30 = &DAT_ram_00024948;
      }
      else {
        local_30 = &DAT_ram_00024938;
      }
    }
    else if (uVar1 < 0x7e4) {
      if (uVar1 < 0x7df) {
        if (uVar1 < 0x7dd) {
          if (uVar1 == 0x7db) {
            local_30 = &DAT_ram_00024928;
          }
          else {
            local_30 = &DAT_ram_00024918;
          }
        }
        else if (uVar1 == 0x7dd) {
          local_30 = &DAT_ram_00024908;
        }
        else {
          local_30 = &DAT_ram_000248f8;
        }
      }
      else if (uVar1 < 0x7e1) {
        if (uVar1 == 0x7df) {
          local_30 = &DAT_ram_000248e8;
        }
        else {
          local_30 = &DAT_ram_000248d8;
        }
      }
      else if (uVar1 == 0x7e1) {
        local_30 = &DAT_ram_000248c8;
      }
      else if (uVar1 == 0x7e2) {
        local_30 = &DAT_ram_000248b8;
      }
      else {
        local_30 = &DAT_ram_000248a8;
      }
    }
    else if (uVar1 < 0x7e9) {
      if (uVar1 < 0x7e6) {
        if (uVar1 == 0x7e4) {
          local_30 = &DAT_ram_00024898;
        }
        else {
          local_30 = &DAT_ram_00024888;
        }
      }
      else if (uVar1 == 0x7e6) {
        local_30 = &DAT_ram_00024878;
      }
      else if (uVar1 == 0x7e7) {
        local_30 = &DAT_ram_00024868;
      }
      else {
        local_30 = &DAT_ram_00024858;
      }
    }
    else if (uVar1 < 0x7eb) {
      if (uVar1 == 0x7e9) {
        local_30 = &DAT_ram_00024848;
      }
      else {
        local_30 = &DAT_ram_00024838;
      }
    }
    else if (uVar1 == 0x7eb) {
      local_30 = &DAT_ram_00024828;
    }
    else if (uVar1 == 0x7ec) {
      local_30 = &DAT_ram_00024818;
    }
    else {
      local_30 = &DAT_ram_00024808;
    }
  }
  else if (uVar1 < 0xbba) {
    if (uVar1 < 0x7f7) {
      if (uVar1 < 0x7f2) {
        if (uVar1 < 0x7f0) {
          if (uVar1 == 0x7ee) {
            local_30 = &DAT_ram_000247f8;
          }
          else {
            local_30 = &DAT_ram_000247e8;
          }
        }
        else if (uVar1 == 0x7f0) {
          local_30 = &DAT_ram_000247d8;
        }
        else {
          local_30 = &DAT_ram_000247c8;
        }
      }
      else if (uVar1 < 0x7f4) {
        if (uVar1 == 0x7f2) {
          local_30 = &DAT_ram_000247b8;
        }
        else {
          local_30 = &DAT_ram_000247a8;
        }
      }
      else if (uVar1 == 0x7f4) {
        local_30 = &DAT_ram_00024798;
      }
      else if (uVar1 == 0x7f5) {
        local_30 = &DAT_ram_00024788;
      }
      else {
        local_30 = &DAT_ram_00024778;
      }
    }
    else if (uVar1 < 0x9c8) {
      if (uVar1 < 0x9c5) {
        if (uVar1 == 0x7f7) {
          local_30 = &DAT_ram_00024768;
        }
        else {
          local_30 = &DAT_ram_00024758;
        }
      }
      else if (uVar1 == 0x9c5) {
        local_30 = &DAT_ram_00024748;
      }
      else if (uVar1 == 0x9c6) {
        local_30 = &DAT_ram_00024738;
      }
      else {
        local_30 = &DAT_ram_00024728;
      }
    }
    else if (uVar1 < 0x9ca) {
      if (uVar1 == 0x9c8) {
        local_30 = &DAT_ram_00024718;
      }
      else {
        local_30 = &DAT_ram_00024708;
      }
    }
    else if (uVar1 == 0x9ca) {
      local_30 = &DAT_ram_000246f8;
    }
    else if (uVar1 == 3000) {
      local_30 = &DAT_ram_000246e8;
    }
    else {
      local_30 = &DAT_ram_000246d8;
    }
  }
  else if (uVar1 < 0xbc4) {
    if (uVar1 < 0xbbf) {
      if (uVar1 < 0xbbc) {
        if (uVar1 == 0xbba) {
          local_30 = &DAT_ram_000246c8;
        }
        else {
          local_30 = &DAT_ram_000246b8;
        }
      }
      else if (uVar1 == 0xbbc) {
        local_30 = &DAT_ram_000246a8;
      }
      else if (uVar1 == 0xbbd) {
        local_30 = &DAT_ram_00024698;
      }
      else {
        local_30 = &DAT_ram_00024688;
      }
    }
    else if (uVar1 < 0xbc1) {
      if (uVar1 == 0xbbf) {
        local_30 = &DAT_ram_00024678;
      }
      else {
        local_30 = &DAT_ram_00024668;
      }
    }
    else if (uVar1 == 0xbc1) {
      local_30 = &DAT_ram_00024658;
    }
    else if (uVar1 == 0xbc2) {
      local_30 = &DAT_ram_00024648;
    }
    else {
      local_30 = &DAT_ram_00024638;
    }
  }
  else if (uVar1 < 0xbc9) {
    if (uVar1 < 0xbc6) {
      if (uVar1 == 0xbc4) {
        local_30 = &DAT_ram_00024628;
      }
      else {
        local_30 = &DAT_ram_00024618;
      }
    }
    else if (uVar1 == 0xbc6) {
      local_30 = &DAT_ram_00024608;
    }
    else if (uVar1 == 0xbc7) {
      local_30 = &DAT_ram_000245f8;
    }
    else {
      local_30 = &DAT_ram_000245e8;
    }
  }
  else if (uVar1 < 0x1005) {
    if (uVar1 == 0xbc9) {
      local_30 = &DAT_ram_000245d8;
    }
    else {
      local_30 = &DAT_ram_000245c8;
    }
  }
  else if (uVar1 == 0x1005) {
    local_30 = &DAT_ram_000245b8;
  }
  else if (uVar1 == 0x1006) {
    local_30 = &DAT_ram_000245a8;
  }
  else {
    local_30 = &DAT_ram_00024598;
  }
  local_10 = 0;
  local_28 = 1;
  local_18 = 0;
  local_20 = 8;
  FUN_ram_00010f08(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),&local_30);
  return;
}



// ============================================================
// Function: FUN_ram_00013130
// Address: ram:00013130
// Size: 1648 bytes
// Called by: FUN_ram_00005418, entrypoint
// Calls: FUN_ram_0001a760, FUN_ram_00019700
// ============================================================

void FUN_ram_00013130(ulonglong ****param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong ****ppppuVar4;
  undefined8 uVar5;
  ulonglong ***local_80;
  ulonglong ***local_78;
  undefined1 *local_70;
  ulonglong ***local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  ulonglong ***local_48;
  undefined1 *local_40;
  ulonglong **local_38;
  undefined8 local_30;
  ulonglong ***local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined1 local_8;
  
  uVar2 = (ulonglong)*param_1 ^ 0x8000000000000000;
  if (0x19 < uVar2) {
    uVar2 = 0xe;
  }
  if ((longlong)uVar2 < 0xd) {
    if ((longlong)uVar2 < 6) {
      if ((longlong)uVar2 < 3) {
        if (uVar2 == 0) {
          local_80 = (ulonglong ***)(param_1 + 1);
          local_40 = &LAB_ram_00013118;
          local_48 = (ulonglong ***)&local_80;
          local_58 = &local_38;
          local_78 = (ulonglong ***)&DAT_ram_00024a78;
          local_68 = (ulonglong ***)&local_48;
          local_10 = 0x400000020;
          local_50 = 1;
          local_70 = (undefined1 *)0x1;
          local_60 = 1;
          local_8 = 3;
          local_28 = (ulonglong ***)0x2;
          local_38 = (ulonglong **)0x2;
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          uVar3 = *(undefined8 *)(param_2 + 0x20);
          ppppuVar4 = &local_78;
LAB_ram_00013730:
          local_18 = 0;
          FUN_ram_00019700(uVar3,uVar5,ppppuVar4);
          return;
        }
        if (uVar2 == 1) {
          pcVar1 = 
          "The arguments provided to a program instruction were invalidAn instruction\'s data contents was invalidAn account\'s data contents was invalidAn account\'s data was too smallAn account\'s balance was too small to complete the instructionThe account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x3c;
        }
        else {
          pcVar1 = 
          "An instruction\'s data contents was invalidAn account\'s data contents was invalidAn account\'s data was too smallAn account\'s balance was too small to complete the instructionThe account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os erro..." /* TRUNCATED STRING LITERAL */
          ;
          uVar3 = 0x2a;
        }
      }
      else if (uVar2 == 3) {
        pcVar1 = 
        "An account\'s data contents was invalidAn account\'s data was too smallAn account\'s balance was too small to complete the instructionThe account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x26;
      }
      else if (uVar2 == 4) {
        pcVar1 = 
        "An account\'s data was too smallAn account\'s balance was too small to complete the instructionThe account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x1f;
      }
      else {
        pcVar1 = 
        "An account\'s balance was too small to complete the instructionThe account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x3e;
      }
    }
    else if ((longlong)uVar2 < 9) {
      if (uVar2 == 6) {
        pcVar1 = 
        "The account did not have the expected program idA signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the un..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x30;
      }
      else if (uVar2 == 7) {
        pcVar1 = 
        "A signature was required but not foundAn initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwra..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x26;
      }
      else {
        pcVar1 = 
        "An initialize instruction was sent to an account that has already been initializedAn attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n b..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x52;
      }
    }
    else if ((longlong)uVar2 < 0xb) {
      if (uVar2 == 9) {
        pcVar1 = 
        "An attempt to operate on an account that hasn\'t been initializedThe instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x40;
      }
      else {
        pcVar1 = 
        "The instruction expected additional account keysFailed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x000102030405060708091011121314151617181920212223242526272829303132333435363738394041424344..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x30;
      }
    }
    else if (uVar2 == 0xb) {
      pcVar1 = 
      "Failed to borrow a reference to account data, already borrowedLength of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x000102030405060708091011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768..." /* TRUNCATED STRING LITERAL */
      ;
      uVar3 = 0x3e;
    }
    else {
      pcVar1 = 
      "Length of the seed is too long for address generationProvided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899..." /* TRUNCATED STRING LITERAL */
      ;
      uVar3 = 0x35;
    }
    goto LAB_ram_00013790;
  }
  if ((longlong)uVar2 < 0x13) {
    if ((longlong)uVar2 < 0x10) {
      if (uVar2 == 0xd) {
        pcVar1 = 
        "Provided seeds do not result in a valid addressAn account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= e..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x2f;
      }
      else {
        if (uVar2 == 0xe) {
          local_38 = (ulonglong **)&DAT_ram_00024a68;
          local_28 = (ulonglong ***)&local_78;
          local_70 = &LAB_ram_000130e8;
          local_78 = (ulonglong ***)&local_48;
          local_30 = 1;
          local_20 = 1;
          uVar5 = *(undefined8 *)(param_2 + 0x28);
          uVar3 = *(undefined8 *)(param_2 + 0x20);
          ppppuVar4 = (ulonglong ****)&local_38;
          local_48 = (ulonglong ***)param_1;
          goto LAB_ram_00013730;
        }
        pcVar1 = 
        "An account does not have enough lamports to be rent-exemptUnsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is ..." /* TRUNCATED STRING LITERAL */
        ;
        uVar3 = 0x3a;
      }
      goto LAB_ram_00013790;
    }
    if (uVar2 == 0x10) {
      pcVar1 = 
      "Unsupported sysvarProvided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printa..." /* TRUNCATED STRING LITERAL */
      ;
      uVar3 = 0x12;
      goto LAB_ram_00013790;
    }
    if (uVar2 != 0x11) {
      pcVar1 = 
      "Accounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
      uVar3 = 0x46;
      goto LAB_ram_00013790;
    }
    pcVar1 = 
    "Provided owner is not allowedAccounts data allocations exceeded the maximum allowed per transactionAccount data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
    ;
  }
  else {
    if ((longlong)uVar2 < 0x16) {
      if (uVar2 == 0x13) {
        pcVar1 = 
        "Account data reallocation was invalidInstruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x25;
      }
      else if (uVar2 == 0x14) {
        pcVar1 = 
        "Instruction trace length exceeded the maximum allowed per transactionBuiltin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x45;
      }
      else {
        pcVar1 = 
        "Builtin programs must consume compute unitsInvalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x2b;
      }
      goto LAB_ram_00013790;
    }
    if (0x17 < (longlong)uVar2) {
      if (uVar2 == 0x18) {
        pcVar1 = 
        "Account is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x14;
      }
      else {
        pcVar1 = 
        "Incorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x1c;
      }
      goto LAB_ram_00013790;
    }
    if (uVar2 == 0x16) {
      pcVar1 = 
      "Invalid account ownerProgram arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
      uVar3 = 0x15;
      goto LAB_ram_00013790;
    }
    pcVar1 = 
    "Program arithmetic overflowedAccount is immutableIncorrect authority providedsrc/encode.rs123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyzsrc/lib.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rspermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
    ;
  }
  uVar3 = 0x1d;
LAB_ram_00013790:
  FUN_ram_0001a760(param_2,pcVar1,uVar3);
  return;
}



// ============================================================
// Function: FUN_ram_000137a0
// Address: ram:000137a0
// Size: 136 bytes
// Called by: entrypoint
// Calls: sol_get_rent_sysvar
// ============================================================

void FUN_ram_000137a0(uint *param_1)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = sol_get_rent_sysvar(&local_18);
  if (lVar1 != 0) {
    param_1[1] = 0x10;
  }
  else {
    *(undefined8 *)(param_1 + 6) = local_8;
    *(undefined8 *)(param_1 + 4) = local_10;
    *(undefined8 *)(param_1 + 2) = local_18;
  }
  *param_1 = (uint)(lVar1 != 0);
  return;
}



// ============================================================
// Function: FUN_ram_00014fa0
// Address: ram:00014fa0
// Size: 1280 bytes
// Called by: FUN_ram_00015640
// ============================================================

undefined8 FUN_ram_00014fa0(uint param_1)

{
  if (param_1 < 0x15) {
    if (param_1 < 10) {
      if (param_1 < 5) {
        if (param_1 < 2) {
          if (param_1 == 0) {
            return 0;
          }
          if (param_1 == 1) {
            return 1;
          }
        }
        else {
          if (param_1 == 2) {
            return 2;
          }
          if (param_1 == 3) {
            return 3;
          }
          if (param_1 == 4) {
            return 4;
          }
        }
      }
      else if (param_1 < 7) {
        if (param_1 == 5) {
          return 5;
        }
        if (param_1 == 6) {
          return 6;
        }
      }
      else {
        if (param_1 == 7) {
          return 7;
        }
        if (param_1 == 8) {
          return 8;
        }
        if (param_1 == 9) {
          return 9;
        }
      }
    }
    else if (param_1 < 0xf) {
      if (param_1 < 0xc) {
        if (param_1 == 10) {
          return 10;
        }
        if (param_1 == 0xb) {
          return 0xb;
        }
      }
      else {
        if (param_1 == 0xc) {
          return 0xc;
        }
        if (param_1 == 0xd) {
          return 0xd;
        }
        if (param_1 == 0xe) {
          return 0xe;
        }
      }
    }
    else if (param_1 < 0x12) {
      if (param_1 == 0xf) {
        return 0xf;
      }
      if (param_1 == 0x10) {
        return 0x10;
      }
      if (param_1 == 0x11) {
        return 0x11;
      }
    }
    else {
      if (param_1 == 0x12) {
        return 0x12;
      }
      if (param_1 == 0x13) {
        return 0x13;
      }
      if (param_1 == 0x14) {
        return 0x14;
      }
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 < 0x1a) {
      if (param_1 < 0x17) {
        if (param_1 == 0x15) {
          return 0x15;
        }
        if (param_1 == 0x16) {
          return 0x16;
        }
      }
      else {
        if (param_1 == 0x17) {
          return 0x17;
        }
        if (param_1 == 0x18) {
          return 0x18;
        }
        if (param_1 == 0x19) {
          return 0x19;
        }
      }
    }
    else if (param_1 < 0x1c) {
      if (param_1 == 0x1a) {
        return 0x1a;
      }
      if (param_1 == 0x1b) {
        return 0x1b;
      }
    }
    else {
      if (param_1 == 0x1c) {
        return 0x1c;
      }
      if (param_1 == 0x1d) {
        return 0x1d;
      }
      if (param_1 == 0x1e) {
        return 0x1e;
      }
    }
  }
  else if (param_1 < 0x24) {
    if (param_1 < 0x21) {
      if (param_1 == 0x1f) {
        return 0x1f;
      }
      if (param_1 == 0x20) {
        return 0x20;
      }
    }
    else {
      if (param_1 == 0x21) {
        return 0x21;
      }
      if (param_1 == 0x22) {
        return 0x22;
      }
      if (param_1 == 0x23) {
        return 0x23;
      }
    }
  }
  else if (param_1 < 0x27) {
    if (param_1 == 0x24) {
      return 0x24;
    }
    if (param_1 == 0x25) {
      return 0x25;
    }
    if (param_1 == 0x26) {
      return 0x26;
    }
  }
  else {
    if (param_1 == 0x27) {
      return 0x27;
    }
    if (param_1 == 0x28) {
      return 0x28;
    }
    if (param_1 == 0x29) {
      return 0x29;
    }
  }
  return 0x2a;
}



// ============================================================
// Function: FUN_ram_000154a0
// Address: ram:000154a0
// Size: 288 bytes
// Called by: FUN_ram_00015640
// Calls: FUN_ram_0000c5f0, FUN_ram_00016aa0, FUN_ram_000176b0, FUN_ram_000176d0
// ============================================================

void FUN_ram_000154a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_ram_0000c5f0(0x1a,1);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_ram_000176b0(1,0x1a,&DAT_ram_00024ad0);
  }
  puVar1[2] = 0x706e6920666f2068;
  puVar1[1] = 0x74676e656c206465;
  *puVar1 = 0x7463657078656e55;
  *(undefined2 *)(puVar1 + 3) = 0x7475;
  puVar2 = (undefined8 *)FUN_ram_0000c5f0(0x18,8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_ram_000176d0(8,0x18);
  }
  puVar2[1] = puVar1;
  puVar2[2] = 0x1a;
  *puVar2 = 0x1a;
  FUN_ram_00016aa0(0x14,puVar2,&DAT_ram_00024b08);
  return;
}



// ============================================================
// Function: FUN_ram_00015640
// Address: ram:00015640
// Size: 344 bytes
// Called by: FUN_ram_0000d500, FUN_ram_0000faf0, FUN_ram_0000e1c0, FUN_ram_0000f578, FUN_ram_0000d6b0, FUN_ram_0000d7d0, FUN_ram_0000f740, FUN_ram_0000ddf0, FUN_ram_0000f9d0, FUN_ram_0000e030
// Calls: FUN_ram_0000c6c0, FUN_ram_00014fa0, FUN_ram_000154a0
// ============================================================

ulonglong FUN_ram_00015640(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar3 = param_1 & 3;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      cVar1 = *(char *)(param_1 + 0x10);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xf);
    }
  }
  else {
    if (uVar3 == 2) {
      return param_1;
    }
    cVar1 = FUN_ram_00014fa0(param_1 >> 0x20);
  }
  uVar2 = param_1;
  if (((cVar1 == '%') && (uVar2 = FUN_ram_000154a0(), 1 < uVar3 - 2)) && (uVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 - 1);
    puVar5 = *(undefined8 **)(param_1 + 7);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
    if (puVar5[1] != 0) {
      FUN_ram_0000c6c0(uVar4,puVar5[1],puVar5[2]);
    }
    FUN_ram_0000c6c0(param_1 - 1,0x18,8);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_ram_00015798
// Address: ram:00015798
// Size: 1280 bytes
// Called by: FUN_ram_00015e38
// ============================================================

undefined8 FUN_ram_00015798(uint param_1)

{
  if (param_1 < 0x15) {
    if (param_1 < 10) {
      if (param_1 < 5) {
        if (param_1 < 2) {
          if (param_1 == 0) {
            return 0;
          }
          if (param_1 == 1) {
            return 1;
          }
        }
        else {
          if (param_1 == 2) {
            return 2;
          }
          if (param_1 == 3) {
            return 3;
          }
          if (param_1 == 4) {
            return 4;
          }
        }
      }
      else if (param_1 < 7) {
        if (param_1 == 5) {
          return 5;
        }
        if (param_1 == 6) {
          return 6;
        }
      }
      else {
        if (param_1 == 7) {
          return 7;
        }
        if (param_1 == 8) {
          return 8;
        }
        if (param_1 == 9) {
          return 9;
        }
      }
    }
    else if (param_1 < 0xf) {
      if (param_1 < 0xc) {
        if (param_1 == 10) {
          return 10;
        }
        if (param_1 == 0xb) {
          return 0xb;
        }
      }
      else {
        if (param_1 == 0xc) {
          return 0xc;
        }
        if (param_1 == 0xd) {
          return 0xd;
        }
        if (param_1 == 0xe) {
          return 0xe;
        }
      }
    }
    else if (param_1 < 0x12) {
      if (param_1 == 0xf) {
        return 0xf;
      }
      if (param_1 == 0x10) {
        return 0x10;
      }
      if (param_1 == 0x11) {
        return 0x11;
      }
    }
    else {
      if (param_1 == 0x12) {
        return 0x12;
      }
      if (param_1 == 0x13) {
        return 0x13;
      }
      if (param_1 == 0x14) {
        return 0x14;
      }
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 < 0x1a) {
      if (param_1 < 0x17) {
        if (param_1 == 0x15) {
          return 0x15;
        }
        if (param_1 == 0x16) {
          return 0x16;
        }
      }
      else {
        if (param_1 == 0x17) {
          return 0x17;
        }
        if (param_1 == 0x18) {
          return 0x18;
        }
        if (param_1 == 0x19) {
          return 0x19;
        }
      }
    }
    else if (param_1 < 0x1c) {
      if (param_1 == 0x1a) {
        return 0x1a;
      }
      if (param_1 == 0x1b) {
        return 0x1b;
      }
    }
    else {
      if (param_1 == 0x1c) {
        return 0x1c;
      }
      if (param_1 == 0x1d) {
        return 0x1d;
      }
      if (param_1 == 0x1e) {
        return 0x1e;
      }
    }
  }
  else if (param_1 < 0x24) {
    if (param_1 < 0x21) {
      if (param_1 == 0x1f) {
        return 0x1f;
      }
      if (param_1 == 0x20) {
        return 0x20;
      }
    }
    else {
      if (param_1 == 0x21) {
        return 0x21;
      }
      if (param_1 == 0x22) {
        return 0x22;
      }
      if (param_1 == 0x23) {
        return 0x23;
      }
    }
  }
  else if (param_1 < 0x27) {
    if (param_1 == 0x24) {
      return 0x24;
    }
    if (param_1 == 0x25) {
      return 0x25;
    }
    if (param_1 == 0x26) {
      return 0x26;
    }
  }
  else {
    if (param_1 == 0x27) {
      return 0x27;
    }
    if (param_1 == 0x28) {
      return 0x28;
    }
    if (param_1 == 0x29) {
      return 0x29;
    }
  }
  return 0x2a;
}



// ============================================================
// Function: FUN_ram_00015c98
// Address: ram:00015c98
// Size: 288 bytes
// Called by: FUN_ram_00015e38
// Calls: FUN_ram_0000c5f0, FUN_ram_00016aa0, FUN_ram_000176b0, FUN_ram_000176d0
// ============================================================

void FUN_ram_00015c98(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_ram_0000c5f0(0x1a,1);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_ram_000176b0(1,0x1a,&DAT_ram_00024b60);
  }
  puVar1[2] = 0x706e6920666f2068;
  puVar1[1] = 0x74676e656c206465;
  *puVar1 = 0x7463657078656e55;
  *(undefined2 *)(puVar1 + 3) = 0x7475;
  puVar2 = (undefined8 *)FUN_ram_0000c5f0(0x18,8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_ram_000176d0(8,0x18);
  }
  puVar2[1] = puVar1;
  puVar2[2] = 0x1a;
  *puVar2 = 0x1a;
  FUN_ram_00016aa0(0x15,puVar2,&DAT_ram_00024b98);
  return;
}



// ============================================================
// Function: FUN_ram_00015e38
// Address: ram:00015e38
// Size: 344 bytes
// Called by: entrypoint
// Calls: FUN_ram_0000c6c0, FUN_ram_00015c98, FUN_ram_00015798
// ============================================================

ulonglong FUN_ram_00015e38(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar3 = param_1 & 3;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      cVar1 = *(char *)(param_1 + 0x10);
    }
    else {
      cVar1 = *(char *)(param_1 + 0xf);
    }
  }
  else {
    if (uVar3 == 2) {
      return param_1;
    }
    cVar1 = FUN_ram_00015798(param_1 >> 0x20);
  }
  uVar2 = param_1;
  if (((cVar1 == '%') && (uVar2 = FUN_ram_00015c98(), 1 < uVar3 - 2)) && (uVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 - 1);
    puVar5 = *(undefined8 **)(param_1 + 7);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
    if (puVar5[1] != 0) {
      FUN_ram_0000c6c0(uVar4,puVar5[1],puVar5[2]);
    }
    FUN_ram_0000c6c0(param_1 - 1,0x18,8);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_ram_00015fb8
// Address: ram:00015fb8
// Size: 1280 bytes
// Called by: FUN_ram_00016b18
// ============================================================

undefined8 FUN_ram_00015fb8(uint param_1)

{
  if (param_1 < 0x15) {
    if (param_1 < 10) {
      if (param_1 < 5) {
        if (param_1 < 2) {
          if (param_1 == 0) {
            return 0;
          }
          if (param_1 == 1) {
            return 1;
          }
        }
        else {
          if (param_1 == 2) {
            return 2;
          }
          if (param_1 == 3) {
            return 3;
          }
          if (param_1 == 4) {
            return 4;
          }
        }
      }
      else if (param_1 < 7) {
        if (param_1 == 5) {
          return 5;
        }
        if (param_1 == 6) {
          return 6;
        }
      }
      else {
        if (param_1 == 7) {
          return 7;
        }
        if (param_1 == 8) {
          return 8;
        }
        if (param_1 == 9) {
          return 9;
        }
      }
    }
    else if (param_1 < 0xf) {
      if (param_1 < 0xc) {
        if (param_1 == 10) {
          return 10;
        }
        if (param_1 == 0xb) {
          return 0xb;
        }
      }
      else {
        if (param_1 == 0xc) {
          return 0xc;
        }
        if (param_1 == 0xd) {
          return 0xd;
        }
        if (param_1 == 0xe) {
          return 0xe;
        }
      }
    }
    else if (param_1 < 0x12) {
      if (param_1 == 0xf) {
        return 0xf;
      }
      if (param_1 == 0x10) {
        return 0x10;
      }
      if (param_1 == 0x11) {
        return 0x11;
      }
    }
    else {
      if (param_1 == 0x12) {
        return 0x12;
      }
      if (param_1 == 0x13) {
        return 0x13;
      }
      if (param_1 == 0x14) {
        return 0x14;
      }
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 < 0x1a) {
      if (param_1 < 0x17) {
        if (param_1 == 0x15) {
          return 0x15;
        }
        if (param_1 == 0x16) {
          return 0x16;
        }
      }
      else {
        if (param_1 == 0x17) {
          return 0x17;
        }
        if (param_1 == 0x18) {
          return 0x18;
        }
        if (param_1 == 0x19) {
          return 0x19;
        }
      }
    }
    else if (param_1 < 0x1c) {
      if (param_1 == 0x1a) {
        return 0x1a;
      }
      if (param_1 == 0x1b) {
        return 0x1b;
      }
    }
    else {
      if (param_1 == 0x1c) {
        return 0x1c;
      }
      if (param_1 == 0x1d) {
        return 0x1d;
      }
      if (param_1 == 0x1e) {
        return 0x1e;
      }
    }
  }
  else if (param_1 < 0x24) {
    if (param_1 < 0x21) {
      if (param_1 == 0x1f) {
        return 0x1f;
      }
      if (param_1 == 0x20) {
        return 0x20;
      }
    }
    else {
      if (param_1 == 0x21) {
        return 0x21;
      }
      if (param_1 == 0x22) {
        return 0x22;
      }
      if (param_1 == 0x23) {
        return 0x23;
      }
    }
  }
  else if (param_1 < 0x27) {
    if (param_1 == 0x24) {
      return 0x24;
    }
    if (param_1 == 0x25) {
      return 0x25;
    }
    if (param_1 == 0x26) {
      return 0x26;
    }
  }
  else {
    if (param_1 == 0x27) {
      return 0x27;
    }
    if (param_1 == 0x28) {
      return 0x28;
    }
    if (param_1 == 0x29) {
      return 0x29;
    }
  }
  return 0x2a;
}



// ============================================================
// Function: FUN_ram_000164b8
// Address: ram:000164b8
// Size: 1512 bytes
// Called by: FUN_ram_00016b18
// ============================================================

void FUN_ram_000164b8(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0x10;
  bVar1 = *param_2;
  if (0x14 < bVar1) {
    if (bVar1 < 0x1f) {
      if (bVar1 < 0x1a) {
        if (bVar1 < 0x17) {
          if (bVar1 != 0x15) {
            pcVar2 = 
            "timed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
            ;
            uVar3 = 9;
            goto LAB_ram_00016a88;
          }
          pcVar2 = 
          "invalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
LAB_ram_000169d0:
          uVar3 = 0xc;
          goto LAB_ram_00016a88;
        }
        if (bVar1 == 0x17) {
          pcVar2 = 
          "write zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          uVar3 = 10;
          goto LAB_ram_00016a88;
        }
        if (bVar1 == 0x18) {
          pcVar2 = &DAT_ram_00020c70;
          goto LAB_ram_00016a88;
        }
        pcVar2 = 
        "seek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        goto LAB_ram_00016798;
      }
      if (0x1b < bVar1) {
        if (bVar1 != 0x1c) {
          if (bVar1 == 0x1d) {
            pcVar2 = 
            "executable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
            ;
            uVar3 = 0x14;
          }
          else {
            pcVar2 = &DAT_ram_00020d96;
            uVar3 = 8;
          }
          goto LAB_ram_00016a88;
        }
        pcVar2 = 
        "resource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
LAB_ram_00016868:
        uVar3 = 0xd;
        goto LAB_ram_00016a88;
      }
      if (bVar1 == 0x1a) {
        pcVar2 = 
        "filesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
LAB_ram_00016a60:
        uVar3 = 0x19;
        goto LAB_ram_00016a88;
      }
      pcVar2 = 
      "file too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
    else {
      if (0x23 < bVar1) {
        if (bVar1 < 0x27) {
          if (bVar1 != 0x24) {
            if (bVar1 != 0x25) {
              pcVar2 = 
              "out of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
              ;
              goto LAB_ram_00016868;
            }
            pcVar2 = 
            "unexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
            ;
            goto LAB_ram_00016a40;
          }
          pcVar2 = 
          "unsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
        }
        else if (bVar1 == 0x27) {
          pcVar2 = 
          "in progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
        }
        else {
          if (bVar1 != 0x28) {
            pcVar2 = 
            "uncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
            ;
            goto LAB_ram_00016a20;
          }
          pcVar2 = 
          "other erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
        }
LAB_ram_00016a80:
        uVar3 = 0xb;
        goto LAB_ram_00016a88;
      }
      if (0x20 < bVar1) {
        if (bVar1 == 0x21) {
          pcVar2 = "invalid filenamerange end index \x01";
          goto LAB_ram_00016a88;
        }
        if (bVar1 != 0x22) {
          pcVar2 = 
          "operation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          goto LAB_ram_000168f0;
        }
        pcVar2 = 
        "argument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
LAB_ram_00016a40:
        uVar3 = 0x16;
        goto LAB_ram_00016a88;
      }
      if (bVar1 == 0x1f) {
        pcVar2 = 
        "cross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x1b;
        goto LAB_ram_00016a88;
      }
      pcVar2 = 
      "too many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
LAB_ram_00016958:
    uVar3 = 0xe;
    goto LAB_ram_00016a88;
  }
  if (bVar1 < 10) {
    if (bVar1 < 5) {
      if (bVar1 < 2) {
        pcVar2 = "entity not foundhost unreachableinvalid filenamerange end index \x01";
        if (bVar1 != 0) {
          pcVar2 = 
          "permission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          uVar3 = 0x11;
        }
        goto LAB_ram_00016a88;
      }
      if (bVar1 != 2) {
        if (bVar1 == 3) {
          pcVar2 = 
          "connection reset) when slicing `entity not foundhost unreachableinvalid filenamerange end index \x01"
          ;
        }
        else {
          pcVar2 = "host unreachableinvalid filenamerange end index \x01";
        }
        goto LAB_ram_00016a88;
      }
      pcVar2 = 
      "connection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
    else {
      if (6 < bVar1) {
        if (bVar1 == 7) {
          pcVar2 = 
          "not connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          goto LAB_ram_00016868;
        }
        if (bVar1 == 8) {
          pcVar2 = 
          "address in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          goto LAB_ram_00016958;
        }
        pcVar2 = 
        "address not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        goto LAB_ram_000168f0;
      }
      if (bVar1 == 5) {
        pcVar2 = 
        "network unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        goto LAB_ram_00016a20;
      }
      pcVar2 = 
      "connection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
    uVar3 = 0x12;
  }
  else {
    if (0xe < bVar1) {
      if (bVar1 < 0x12) {
        if (bVar1 == 0xf) {
          pcVar2 = 
          "is a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          goto LAB_ram_00016958;
        }
        if (bVar1 != 0x10) {
          pcVar2 = 
          "read-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
          ;
          uVar3 = 0x26;
          goto LAB_ram_00016a88;
        }
        pcVar2 = 
        "directory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
LAB_ram_00016a20:
        uVar3 = 0x13;
        goto LAB_ram_00016a88;
      }
      if (bVar1 == 0x12) {
        pcVar2 = 
        "filesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0x38;
        goto LAB_ram_00016a88;
      }
      if (bVar1 == 0x13) {
        pcVar2 = 
        "stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        goto LAB_ram_00016a60;
      }
      pcVar2 = 
      "invalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
LAB_ram_00016798:
      uVar3 = 0x17;
      goto LAB_ram_00016a88;
    }
    if (bVar1 < 0xc) {
      if (bVar1 == 10) {
        pcVar2 = 
        "network downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        goto LAB_ram_000169d0;
      }
      pcVar2 = 
      "broken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
      goto LAB_ram_00016a80;
    }
    if (bVar1 == 0xc) {
      pcVar2 = 
      "entity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
    else {
      if (bVar1 != 0xd) {
        pcVar2 = 
        "not a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
        ;
        uVar3 = 0xf;
        goto LAB_ram_00016a88;
      }
      pcVar2 = 
      "operation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filefilesystem quota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error (os error )Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
      ;
    }
LAB_ram_000168f0:
    uVar3 = 0x15;
  }
LAB_ram_00016a88:
  param_1[1] = uVar3;
  *param_1 = pcVar2;
  return;
}



// ============================================================
// Function: FUN_ram_00016aa0
// Address: ram:00016aa0
// Size: 120 bytes
// Called by: FUN_ram_0000d378, FUN_ram_00015c98, FUN_ram_000154a0, FUN_ram_00000120
// Calls: FUN_ram_0000c5f0, FUN_ram_000176d0
// ============================================================

longlong FUN_ram_00016aa0(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_ram_0000c5f0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_ram_000176d0(8,0x18);
  }
  *(undefined1 *)(puVar1 + 2) = param_1;
  puVar1[1] = param_3;
  *puVar1 = param_2;
  return (longlong)puVar1 + 1;
}



// ============================================================
// Function: FUN_ram_00016b18
// Address: ram:00016b18
// Size: 728 bytes
// Called by: entrypoint
// Calls: FUN_ram_00017d28, FUN_ram_0001b578, FUN_ram_000164b8, FUN_ram_00016e00, FUN_ram_00019700, FUN_ram_00015fb8, FUN_ram_000170a0
// ============================================================

undefined8 FUN_ram_00016b18(ulonglong *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 **local_68;
  undefined1 *local_60;
  undefined8 **local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar3 = (undefined8 *)*param_1;
  uVar4 = (ulonglong)puVar3 & 3;
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      uVar2 = FUN_ram_0001b578(*puVar3,puVar3[1],param_2);
    }
    else {
      pcVar5 = *(code **)(*(longlong *)((longlong)puVar3 + 7) + 0x20);
      uVar2 = (*pcVar5)(*(undefined8 *)((longlong)puVar3 - 1),param_2,pcVar5);
    }
  }
  else if (uVar4 == 2) {
    local_6c = (undefined4)((ulonglong)puVar3 >> 0x20);
    FUN_ram_00016e00(&local_68);
    local_30 = &DAT_ram_00024c08;
    local_20 = &local_50;
    local_38 = &LAB_ram_0001d508;
    local_40 = &local_6c;
    local_48 = &LAB_ram_00015f90;
    local_10 = 0;
    local_28 = 3;
    local_18 = 2;
    local_50 = &local_68;
    uVar2 = FUN_ram_00019700(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                             &local_30);
    FUN_ram_00017d28(&local_68);
    FUN_ram_000170a0(&local_68);
  }
  else {
    uVar1 = FUN_ram_00015fb8((ulonglong)puVar3 >> 0x20);
    local_6c = CONCAT31(local_6c._1_3_,uVar1);
    FUN_ram_000164b8(&local_80,&local_6c);
    local_60 = &LAB_ram_0001de88;
    local_68 = &local_50;
    local_30 = &DAT_ram_00020c50;
    local_20 = &local_68;
    local_48 = (undefined1 *)local_78;
    local_50 = (undefined8 **)local_80;
    local_10 = 0;
    local_28 = 1;
    local_18 = 1;
    uVar2 = FUN_ram_00019700(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                             &local_30);
  }
  return uVar2;
}



// ============================================================
// Function: abort
// Address: ram:00016df0
// Size: 8 bytes
// Called by: FUN_ram_00016f00
// Calls: abort
// ============================================================

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// ============================================================
// Function: thunk_FUN_ram_00016ee8
// Address: ram:00016df8
// Size: 8 bytes
// Called by: FUN_ram_000181a8
// Calls: FUN_ram_00016ee8
// ============================================================

void thunk_FUN_ram_00016ee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_ram_00016ee8();
}



// ============================================================
// Function: FUN_ram_00016e00
// Address: ram:00016e00
// Size: 216 bytes
// Called by: FUN_ram_00016b18
// Calls: FUN_ram_000170d0, FUN_ram_000176b0
// ============================================================

void FUN_ram_00016e00(undefined8 *param_1)

{
  longlong local_18;
  undefined8 local_10;
  undefined8 *local_8;
  
  FUN_ram_000170d0(&local_18,0x14,0,1,1);
  if (local_18 == 1) {
    FUN_ram_000176b0(local_10,local_8,&DAT_ram_00024bf0);
  }
  local_8[1] = 0x736563637573206e;
  *local_8 = 0x6f6974617265706f;
  *(undefined4 *)(local_8 + 2) = 0x6c756673;
  param_1[1] = local_8;
  *param_1 = local_10;
  param_1[2] = 0x14;
  return;
}



// ============================================================
// Function: FUN_ram_00016ed8
// Address: ram:00016ed8
// Size: 16 bytes
// Called by: FUN_ram_00016f00
// Calls: sol_log_
// ============================================================

void FUN_ram_00016ed8(void)

{
  sol_log_();
  return;
}



// ============================================================
// Function: FUN_ram_00016ee8
// Address: ram:00016ee8
// Size: 8 bytes
// Called by: thunk_FUN_ram_00016ee8, FUN_ram_00016ee8
// Calls: FUN_ram_00016ee8
// ============================================================

void FUN_ram_00016ee8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_ram_00016ee8();
}



// ============================================================
// Function: abort
// Address: ram:00016ef8
// Size: 8 bytes
// Called by: abort
// Calls: abort
// ============================================================

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



// ============================================================
// Function: FUN_ram_00016f00
// Address: ram:00016f00
// Size: 40 bytes
// Called by: FUN_ram_00016f28
// Calls: FUN_ram_00016ed8, abort
// ============================================================

void FUN_ram_00016f00(void)

{
  FUN_ram_00016ed8("Error: memory allocation failed, out of memoryErrorcapacity overflowalloc/src/raw_vec.rsalloc/src/string.rsa formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,0x2e);
                    /* WARNING: Subroutine does not return */
  abort();
}



// ============================================================
// Function: FUN_ram_00016f28
// Address: ram:00016f28
// Size: 48 bytes
// Called by: FUN_ram_0000c988
// Calls: FUN_ram_00016f00, FUN_ram_00019700
// ============================================================

void FUN_ram_00016f28(undefined8 param_1,undefined8 param_2)

{
  FUN_ram_00016f00();
  FUN_ram_00019700(param_1,&DAT_ram_00024c38,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_00016fb8
// Address: ram:00016fb8
// Size: 88 bytes
// Called by: FUN_ram_000176b0
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_00016fb8(undefined8 param_1)

{
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = &DAT_ram_00024c68;
  local_10 = 0;
  local_28 = 1;
  local_18 = 0;
  local_20 = 8;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_30,param_1);
}



// ============================================================
// Function: FUN_ram_000170a0
// Address: ram:000170a0
// Size: 48 bytes
// Called by: FUN_ram_00016b18
// Calls: FUN_ram_0000c6c0
// ============================================================

void FUN_ram_000170a0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_ram_0000c6c0(param_1[1],*param_1,1);
  }
  return;
}



// ============================================================
// Function: FUN_ram_000170d0
// Address: ram:000170d0
// Size: 424 bytes
// Called by: FUN_ram_00016e00
// Calls: FUN_ram_0001ffb8, FUN_ram_0000c5f0, FUN_ram_0000c7d0
// ============================================================

void FUN_ram_000170d0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                     longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong local_10;
  longlong local_8;
  
  FUN_ram_0001ffb8(&local_10,(param_4 + param_5) - 1U & -param_4,0,param_2,0);
  if ((local_8 == 0) && (local_10 <= 0x8000000000000000U - param_4)) {
    if (local_10 == 0) {
      param_1[2] = param_4;
      param_1[1] = 0;
    }
    else {
      if (param_3 == 0) {
        lVar1 = FUN_ram_0000c5f0(local_10,param_4);
      }
      else {
        lVar1 = FUN_ram_0000c7d0(local_10,param_4);
      }
      if (lVar1 == 0) {
        param_1[2] = local_10;
        param_1[1] = param_4;
        goto LAB_ram_000171f0;
      }
      param_1[2] = lVar1;
      param_1[1] = param_2;
    }
    uVar2 = 0;
  }
  else {
    param_1[1] = 0;
LAB_ram_000171f0:
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}



// ============================================================
// Function: FUN_ram_000176b0
// Address: ram:000176b0
// Size: 32 bytes
// Called by: FUN_ram_00010f48, FUN_ram_00015c98, FUN_ram_00016e00, FUN_ram_00010230, FUN_ram_000100b8, FUN_ram_000154a0, FUN_ram_00017768, entrypoint, FUN_ram_00001688, FUN_ram_000017c0
// Calls: FUN_ram_00016fb8, FUN_ram_000176d0
// ============================================================

void FUN_ram_000176b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  if (param_1 == 0) {
    FUN_ram_00016fb8();
    param_1 = param_3;
  }
  FUN_ram_000176d0();
  FUN_ram_0000c988();
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  return;
}



// ============================================================
// Function: FUN_ram_000176d0
// Address: ram:000176d0
// Size: 72 bytes
// Called by: FUN_ram_0000d378, FUN_ram_00016aa0, FUN_ram_00015c98, FUN_ram_000124a0, FUN_ram_000154a0, FUN_ram_00000120, FUN_ram_000176b0
// Calls: FUN_ram_0000c988
// ============================================================

void FUN_ram_000176d0(longlong param_1,undefined8 *param_2)

{
  FUN_ram_0000c988();
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined8 *)(param_1 + 8);
  return;
}



// ============================================================
// Function: FUN_ram_00017768
// Address: ram:00017768
// Size: 592 bytes
// Called by: FUN_ram_0000d500, FUN_ram_0000faf0, custom_panic, entrypoint, FUN_ram_0000e030
// Calls: FUN_ram_0000c5f0, FUN_ram_00018308, FUN_ram_00019700, FUN_ram_000176b0
// ============================================================

void FUN_ram_00017768(ulonglong *param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  undefined1 uStack_1;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
LAB_ram_00017848:
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    uVar6 = 0;
    plVar5 = (longlong *)(*param_2 + 8);
    do {
      uVar6 = *plVar5 + uVar6;
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (param_2[3] != 0) {
      bVar1 = uVar6 < 0x10;
      if (((longlong)uVar6 < 0) || (uVar6 = uVar6 * 2, bVar1 && *(longlong *)(*param_2 + 8) == 0))
      goto LAB_ram_00017848;
    }
    uVar7 = 0;
    if ((longlong)uVar6 < 0) {
LAB_ram_00017940:
      FUN_ram_000176b0(uVar7,uVar6,&DAT_ram_00024c90);
      goto LAB_ram_00017968;
    }
    uVar2 = 1;
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar7 = 1;
      uVar2 = FUN_ram_0000c5f0(uVar6,1);
      uVar3 = uVar6;
      if (uVar2 == 0) goto LAB_ram_00017940;
    }
  }
  local_10 = 0;
  local_20 = uVar3;
  local_18 = uVar2;
  lVar4 = FUN_ram_00019700(&local_20,&DAT_ram_00024c38,param_2);
  if (lVar4 == 0) {
    param_1[2] = local_10;
    param_1[1] = local_18;
    *param_1 = local_20;
    return;
  }
LAB_ram_00017968:
                    /* WARNING: Subroutine does not return */
  FUN_ram_00018308("a formatting trait implementation returned an error when the underlying stream did not)..:called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,0x56,&uStack_1,&DAT_ram_00024ca8,&DAT_ram_00024cc8);
}



// ============================================================
// Function: FUN_ram_00017d28
// Address: ram:00017d28
// Size: 8 bytes
// Called by: FUN_ram_00016b18
// ============================================================

void FUN_ram_00017d28(void)

{
  return;
}



// ============================================================
// Function: FUN_ram_00017f90
// Address: ram:00017f90
// Size: 40 bytes
// Called by: FUN_ram_00002368
// Calls: FUN_ram_000181d8
// ============================================================

undefined8 FUN_ram_00017f90(undefined8 param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_30;
  undefined1 *puStack_28;
  longlong lStack_20;
  undefined1 *puStack_18;
  longlong lStack_10;
  undefined1 *puStack_8;
  
  pcVar1 = 
  "called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
  ;
  lVar2 = 0x2b;
  FUN_ram_000181d8("called `Option::unwrap()` on a `None` valuepanicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,0x2b,param_1);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  lVar4 = *(longlong *)(lVar2 + 0x28);
  pcVar5 = *(code **)(lVar4 + 0x18);
  lVar2 = (*pcVar5)(uVar3,
                    "panicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                    ,0xc);
  uVar6 = 1;
  if (lVar2 == 0) {
    lStack_30 = *(longlong *)(pcVar1 + 8);
    puStack_60 = &DAT_ram_00024cf8;
    plStack_50 = &lStack_30;
    lStack_10 = lStack_30 + 0x14;
    puStack_8 = &LAB_ram_0001d870;
    puStack_18 = &LAB_ram_0001d870;
    lStack_20 = lStack_30 + 0x10;
    puStack_28 = &LAB_ram_0001de88;
    uStack_40 = 0;
    uStack_58 = 3;
    uStack_48 = 3;
    lVar2 = FUN_ram_00019700(uVar3,lVar4,&puStack_60);
    if ((lVar2 == 0) &&
       (lVar2 = (*pcVar5)(uVar3,
                          ":\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                          ,2), lVar2 == 0)) {
      FUN_ram_0001e430(&lStack_30,*(undefined8 *)pcVar1,0x30);
      uVar6 = FUN_ram_00019700(uVar3,lVar4,&lStack_30);
    }
  }
  return uVar6;
}



// ============================================================
// Function: FUN_ram_00017fb8
// Address: ram:00017fb8
// Size: 496 bytes
// Calls: FUN_ram_0001e430, FUN_ram_00019700
// ============================================================

undefined8 FUN_ram_00017fb8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_30;
  undefined1 *local_28;
  longlong local_20;
  undefined1 *local_18;
  longlong local_10;
  undefined1 *local_8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  pcVar4 = *(code **)(lVar3 + 0x18);
  lVar1 = (*pcVar4)(uVar2,
                    "panicked at :\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                    ,0xc);
  uVar5 = 1;
  if (lVar1 == 0) {
    local_30 = param_1[1];
    local_60 = &DAT_ram_00024cf8;
    local_50 = &local_30;
    local_10 = local_30 + 0x14;
    local_8 = &LAB_ram_0001d870;
    local_18 = &LAB_ram_0001d870;
    local_20 = local_30 + 0x10;
    local_28 = &LAB_ram_0001de88;
    local_40 = 0;
    local_58 = 3;
    local_48 = 3;
    lVar1 = FUN_ram_00019700(uVar2,lVar3,&local_60);
    if ((lVar1 == 0) &&
       (lVar1 = (*pcVar4)(uVar2,
                          ":\n but the index is :  { ,  {\n,\n} }((\n,core/src/fmt/num.rs0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                          ,2), lVar1 == 0)) {
      FUN_ram_0001e430(&local_30,*param_1,0x30);
      uVar5 = FUN_ram_00019700(uVar2,lVar3,&local_30);
    }
  }
  return uVar5;
}



// ============================================================
// Function: FUN_ram_000181a8
// Address: ram:000181a8
// Size: 48 bytes
// Called by: FUN_ram_0001d1e0, FUN_ram_000181d8, FUN_ram_0001d0c8, FUN_ram_0001df80, FUN_ram_0001e048, FUN_ram_00018308, FUN_ram_0001d070, FUN_ram_00016fb8, FUN_ram_00018240, FUN_ram_0001deb8
// Calls: thunk_FUN_ram_00016ee8
// ============================================================

void FUN_ram_000181a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined2 local_8;
  
  local_8 = 1;
  local_18 = param_1;
  local_10 = param_2;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_ram_00016ee8(&local_18);
}



// ============================================================
// Function: FUN_ram_000181d8
// Address: ram:000181d8
// Size: 104 bytes
// Called by: FUN_ram_00017f90
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_000181d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_10;
  undefined8 local_8;
  
  local_40 = &local_10;
  local_20 = 0;
  local_38 = 1;
  local_28 = 0;
  local_30 = 8;
  local_10 = param_1;
  local_8 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_40,param_3);
}



// ============================================================
// Function: FUN_ram_00018240
// Address: ram:00018240
// Size: 200 bytes
// Called by: FUN_ram_00005620
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_00018240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  local_50 = &DAT_ram_00024d28;
  local_40 = &local_20;
  local_10 = &local_60;
  local_8 = &LAB_ram_0001db88;
  local_18 = &LAB_ram_0001db88;
  local_20 = &local_58;
  local_30 = 0;
  local_48 = 2;
  local_38 = 2;
  local_60 = param_1;
  local_58 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_50,param_3);
}



// ============================================================
// Function: FUN_ram_00018308
// Address: ram:00018308
// Size: 232 bytes
// Called by: FUN_ram_000124a0, FUN_ram_00005418, FUN_ram_00017768, entrypoint, FUN_ram_000026c0
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_00018308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  local_50 = &DAT_ram_00024d48;
  local_40 = &local_20;
  local_8 = &LAB_ram_0001de58;
  local_10 = &local_60;
  local_18 = &LAB_ram_0001de88;
  local_20 = &local_70;
  local_30 = 0;
  local_48 = 2;
  local_38 = 2;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = param_3;
  local_58 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_50,param_5);
}



// ============================================================
// Function: FUN_ram_000191d8
// Address: ram:000191d8
// Size: 264 bytes
// Called by: FUN_ram_0001d338
// Calls: FUN_ram_0001d0c8, FUN_ram_00019b68
// ============================================================

void FUN_ram_000191d8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_3 [3];
  
  lVar3 = 0;
  do {
    uVar1 = FUN_ram_0001d0c8(param_2 & 0xf);
    auStack_3[lVar3 + 2] = uVar1;
    lVar3 = lVar3 + -1;
    uVar2 = param_2 & 0xffffffff;
    param_2 = uVar2 >> 4;
  } while (0xf < uVar2);
  FUN_ram_00019b68(param_3,1,
                   "0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,2);
  return;
}



// ============================================================
// Function: FUN_ram_000193e8
// Address: ram:000193e8
// Size: 256 bytes
// Called by: FUN_ram_0001d2f8
// Calls: FUN_ram_0001d0c8, FUN_ram_00019b68
// ============================================================

void FUN_ram_000193e8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_3 [3];
  
  lVar3 = 0;
  do {
    uVar1 = FUN_ram_0001d0c8(param_2 & 0xf);
    auStack_3[lVar3 + 2] = uVar1;
    lVar3 = lVar3 + -1;
    uVar2 = param_2 & 0xff;
    param_2 = uVar2 >> 4;
  } while (0xf < uVar2);
  FUN_ram_00019b68(param_3,1,
                   "0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,2);
  return;
}



// ============================================================
// Function: FUN_ram_000194e8
// Address: ram:000194e8
// Size: 256 bytes
// Called by: FUN_ram_0001d318
// Calls: FUN_ram_0001d1e0, FUN_ram_00019b68
// ============================================================

void FUN_ram_000194e8(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_3 [3];
  
  lVar3 = 0;
  do {
    uVar1 = FUN_ram_0001d1e0(param_2 & 0xf);
    auStack_3[lVar3 + 2] = uVar1;
    lVar3 = lVar3 + -1;
    uVar2 = param_2 & 0xff;
    param_2 = uVar2 >> 4;
  } while (0xf < uVar2);
  FUN_ram_00019b68(param_3,1,
                   "0x00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899core/src/fmt/mod.rscore/src/str/mod.rs[...]begin <= end (`byte index  is not a char boundary; it is inside ) of ` is out of bounds of `core/src/unicode/printable.rs"
                   ,2);
  return;
}



// ============================================================
// Function: FUN_ram_00019700
// Address: ram:00019700
// Size: 1128 bytes
// Called by: FUN_ram_00017fb8, FUN_ram_00016b18, FUN_ram_00010f08, FUN_ram_00013130, FUN_ram_00016f28, FUN_ram_00017768
// ============================================================

undefined8 FUN_ram_00019700(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  undefined1 local_8;
  
  local_8 = 3;
  local_10 = 0x20;
  local_30 = 0;
  local_40 = 0;
  lVar11 = param_3[4];
  local_20 = param_1;
  local_18 = param_2;
  if (lVar11 == 0) {
    uVar10 = 0;
    if (param_3[3] != 0) {
      puVar8 = (undefined8 *)param_3[2];
      puVar12 = puVar8 + param_3[3] * 2;
      plVar13 = (longlong *)(*param_3 + 8);
      do {
        if (((*plVar13 != 0) &&
            (lVar11 = (**(code **)(local_18 + 0x18))
                                (local_20,plVar13[-1],*plVar13,*(code **)(local_18 + 0x18)),
            lVar11 != 0)) ||
           (lVar11 = (*(code *)puVar8[1])(*puVar8,&local_40,(code *)puVar8[1]), lVar11 != 0))
        goto LAB_ram_00019b58;
        uVar10 = uVar10 + 1;
        plVar13 = plVar13 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar12);
    }
  }
  else {
    uVar10 = 0;
    lVar3 = param_3[5];
    if (lVar3 != 0) {
      lVar9 = 0;
      lVar4 = param_3[2];
      plVar13 = (longlong *)(*param_3 + 8);
      do {
        lVar6 = *plVar13;
        if ((lVar6 != 0) &&
           (lVar1 = (**(code **)(local_18 + 0x18))
                              (local_20,plVar13[-1],lVar6,*(code **)(local_18 + 0x18)), lVar1 != 0))
        goto LAB_ram_00019b58;
        lVar1 = lVar11 + lVar9;
        local_8 = *(undefined1 *)(lVar1 + 0x30);
        local_10 = *(undefined8 *)(lVar1 + 0x28);
        local_30 = 0;
        local_40 = 0;
        if (*(longlong *)(lVar1 + 0x10) != 2) {
          if (*(longlong *)(lVar1 + 0x10) == 1) {
            lVar6 = *(longlong *)(lVar11 + lVar9 + 0x18) * 0x10;
            plVar5 = (longlong *)(lVar4 + lVar6);
            if (*plVar5 != 0) goto LAB_ram_000199a0;
          }
          else {
            plVar5 = (longlong *)(lVar1 + 0x10);
          }
          local_40 = 1;
          lVar6 = plVar5[1];
        }
LAB_ram_000199a0:
        plVar5 = (longlong *)(lVar11 + lVar9);
        local_28 = lVar6;
        if (*plVar5 != 2) {
          if (*plVar5 == 1) {
            local_28 = *(longlong *)(lVar11 + lVar9 + 8) * 0x10;
            plVar5 = (longlong *)(lVar4 + local_28);
            if (*plVar5 != 0) goto LAB_ram_00019a30;
          }
          local_30 = 1;
          local_28 = plVar5[1];
        }
LAB_ram_00019a30:
        puVar8 = (undefined8 *)(lVar4 + *(longlong *)(lVar11 + lVar9 + 0x20) * 0x10);
        pcVar7 = (code *)puVar8[1];
        local_38 = lVar6;
        lVar6 = (*pcVar7)(*puVar8,&local_40,pcVar7);
        if (lVar6 != 0) goto LAB_ram_00019b58;
        uVar10 = uVar10 + 1;
        plVar13 = plVar13 + 2;
        lVar9 = lVar9 + 0x38;
      } while (lVar3 * 0x38 != lVar9);
    }
  }
  if ((uVar10 < (ulonglong)param_3[1]) &&
     (puVar8 = (undefined8 *)(*param_3 + uVar10 * 0x10),
     lVar11 = (**(code **)(local_18 + 0x18))(local_20,*puVar8,puVar8[1],*(code **)(local_18 + 0x18))
     , lVar11 != 0)) {
LAB_ram_00019b58:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// Function: FUN_ram_00019b68
// Address: ram:00019b68
// Size: 1408 bytes
// Called by: FUN_ram_000194e8, FUN_ram_0001d3a0, FUN_ram_0001d898, FUN_ram_0001dbb0, FUN_ram_000193e8, FUN_ram_000191d8
// Calls: FUN_ram_0001a648, FUN_ram_0001a0e8, FUN_ram_0001baa8
// ============================================================

ulonglong FUN_ram_00019b68(longlong *param_1,longlong param_2,char *param_3,ulonglong param_4,
                          longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  code *pcVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong local_20;
  int local_18;
  ulonglong local_10;
  int local_8;
  
  uVar1 = *(ulonglong *)(param_5 + -0xff8);
  if (param_2 == 0) {
    uVar9 = 0x2d;
    uVar13 = *(uint *)((longlong)param_1 + 0x34);
LAB_ram_00019c50:
    uVar3 = uVar1 + 1;
  }
  else {
    uVar9 = 0x110000;
    uVar13 = *(uint *)((longlong)param_1 + 0x34);
    uVar3 = uVar1;
    if ((uVar13 & 1) != 0) {
      uVar9 = 0x2b;
      goto LAB_ram_00019c50;
    }
  }
  uVar6 = *(undefined8 *)(param_5 + -0x1000);
  pcVar7 = (char *)0x0;
  if ((uVar13 & 4) != 0) {
    if (param_4 < 0x20) {
      lVar2 = 0;
      pcVar7 = param_3;
      for (uVar11 = param_4; uVar11 != 0; uVar11 = uVar11 - 1) {
        lVar2 = lVar2 + (ulonglong)(-0x41 < *pcVar7);
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      lVar2 = FUN_ram_0001baa8(param_3,param_4);
    }
    uVar3 = lVar2 + uVar3;
    pcVar7 = param_3;
  }
  if (*param_1 == 0) {
    lVar2 = FUN_ram_0001a0e8(param_1,uVar9,pcVar7);
  }
  else {
    uVar11 = param_1[1];
    if (uVar3 < uVar11) {
      if ((uVar13 & 8) == 0) {
        uVar4 = 1;
        FUN_ram_0001a648(&local_20,param_1,uVar11 - uVar3,1);
        if ((local_18 == 0x110000) ||
           (lVar2 = FUN_ram_0001a0e8(param_1,uVar9,pcVar7,param_4), lVar2 != 0))
        goto LAB_ram_00019f30;
        lVar14 = param_1[4];
        lVar5 = param_1[5];
        pcVar12 = *(code **)(lVar5 + 0x18);
        lVar2 = (*pcVar12)(lVar14,uVar6,uVar1,pcVar12);
        if (lVar2 != 0) goto LAB_ram_00019f30;
        uVar1 = 0;
        do {
          uVar3 = local_20;
          if (local_20 == uVar1) break;
          pcVar12 = *(code **)(lVar5 + 0x20);
          lVar2 = (*pcVar12)(lVar14,local_18,pcVar12);
          uVar3 = uVar1;
          uVar1 = uVar1 + 1;
        } while (lVar2 == 0);
        uVar4 = 1;
        if (uVar3 < local_20) goto LAB_ram_00019f30;
      }
      else {
        lVar2 = param_1[6];
        *(undefined4 *)(param_1 + 6) = 0x30;
        lVar14 = param_1[7];
        *(undefined1 *)(param_1 + 7) = 1;
        lVar5 = FUN_ram_0001a0e8(param_1,uVar9,pcVar7);
        uVar4 = 1;
        if ((lVar5 != 0) ||
           (FUN_ram_0001a648(&local_10,param_1,uVar11 - uVar3,1), local_8 == 0x110000))
        goto LAB_ram_00019f30;
        lVar8 = param_1[4];
        lVar10 = param_1[5];
        pcVar12 = *(code **)(lVar10 + 0x18);
        lVar5 = (*pcVar12)(lVar8,uVar6,uVar1,pcVar12);
        if (lVar5 != 0) goto LAB_ram_00019f30;
        uVar1 = 0;
        do {
          uVar3 = uVar1;
          if (local_10 == uVar3) goto LAB_ram_0001a0c0;
          pcVar12 = *(code **)(lVar10 + 0x20);
          lVar5 = (*pcVar12)(lVar8,local_8,pcVar12);
          uVar1 = uVar3 + 1;
        } while (lVar5 == 0);
        if (uVar3 < local_10) goto LAB_ram_00019f30;
LAB_ram_0001a0c0:
        *(char *)(param_1 + 7) = (char)lVar14;
        *(int *)(param_1 + 6) = (int)lVar2;
      }
      uVar4 = 0;
      goto LAB_ram_00019f30;
    }
    lVar2 = FUN_ram_0001a0e8(param_1,uVar9,pcVar7);
  }
  uVar4 = 1;
  if (lVar2 == 0) {
    uVar4 = (**(code **)(param_1[5] + 0x18))(param_1[4],uVar6,uVar1,*(code **)(param_1[5] + 0x18));
  }
LAB_ram_00019f30:
  return uVar4 & 1;
}



// ============================================================
// Function: FUN_ram_0001a0e8
// Address: ram:0001a0e8
// Size: 192 bytes
// Called by: FUN_ram_00019b68
// ============================================================

undefined8 FUN_ram_0001a0e8(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (((param_2 & 0xffffffff) != 0x110000) &&
     (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x20),
     lVar1 = (*pcVar3)(*(undefined8 *)(param_1 + 0x20),param_2,pcVar3), lVar1 != 0)) {
    return 1;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    pcVar3 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x18);
    uVar2 = (*pcVar3)(*(undefined8 *)(param_1 + 0x20),param_3,param_4,pcVar3);
  }
  return uVar2;
}



// ============================================================
// Function: FUN_ram_0001a1a8
// Address: ram:0001a1a8
// Size: 1184 bytes
// Called by: FUN_ram_0001b578
// Calls: FUN_ram_0001a648, FUN_ram_0001baa8
// ============================================================

ulonglong FUN_ram_0001a1a8(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  code *pcVar9;
  longlong lVar10;
  byte *local_20;
  byte *local_18;
  ulonglong local_10;
  int local_8;
  
  local_18 = param_2;
  local_20 = param_3;
  if ((*param_1 == 0) && ((param_1[2] & 1U) == 0)) {
    lVar5 = param_1[4];
    pcVar9 = *(code **)(param_1[5] + 0x18);
  }
  else {
    if ((param_1[2] & 1U) != 0) {
      pbVar6 = (byte *)0x0;
      pbVar8 = param_2;
      if (param_1[3] != 0) {
        uVar4 = 0;
        pbVar2 = param_2;
        do {
          local_20 = param_3;
          local_18 = param_2;
          if (pbVar2 == param_2 + (longlong)param_3) goto LAB_ram_0001a400;
          pbVar8 = pbVar2 + 1;
          bVar1 = *pbVar2;
          if ((((char)bVar1 < '\0') && (pbVar8 = pbVar2 + 2, 0xdf < bVar1)) &&
             (pbVar8 = pbVar2 + 3, 0xef < bVar1)) {
            pbVar8 = pbVar2 + 4;
          }
          uVar4 = uVar4 + 1;
          pbVar6 = pbVar8 + ((longlong)pbVar6 - (longlong)pbVar2);
          pbVar2 = pbVar8;
        } while (uVar4 < (ulonglong)param_1[3]);
      }
      local_20 = param_3;
      local_18 = param_2;
      if (pbVar8 != param_2 + (longlong)param_3) {
        if (pbVar6 == (byte *)0x0) {
LAB_ram_0001a3d0:
          pbVar8 = param_2;
        }
        else if (pbVar6 < param_3) {
          pbVar8 = (byte *)0x0;
          if (-0x41 < (char)param_2[(longlong)pbVar6]) goto LAB_ram_0001a3d0;
        }
        else {
          pbVar8 = (byte *)0x0;
          if (pbVar6 == param_3) goto LAB_ram_0001a3d0;
        }
        local_20 = param_3;
        local_18 = param_2;
        if (pbVar8 != (byte *)0x0) {
          local_20 = pbVar6;
          local_18 = pbVar8;
        }
      }
    }
LAB_ram_0001a400:
    if (*param_1 == 0) {
      lVar5 = param_1[4];
      pcVar9 = *(code **)(param_1[5] + 0x18);
    }
    else {
      uVar4 = param_1[1];
      if (local_20 < (byte *)0x20) {
        uVar3 = 0;
        pbVar6 = local_18;
        for (pbVar8 = local_20; pbVar8 != (byte *)0x0; pbVar8 = pbVar8 + -1) {
          uVar3 = uVar3 + (-0x41 < (char)*pbVar6);
          pbVar6 = pbVar6 + 1;
        }
      }
      else {
        uVar3 = FUN_ram_0001baa8(local_18,local_20);
      }
      if (uVar3 < uVar4) {
        FUN_ram_0001a648(&local_10,param_1,uVar4 - uVar3,0);
        uVar4 = 1;
        if (local_8 != 0x110000) {
          lVar7 = param_1[4];
          lVar10 = param_1[5];
          pcVar9 = *(code **)(lVar10 + 0x18);
          lVar5 = (*pcVar9)(lVar7,local_18,local_20,pcVar9);
          if (lVar5 == 0) {
            uVar4 = 0;
            do {
              uVar3 = local_10;
              if (local_10 == uVar4) break;
              pcVar9 = *(code **)(lVar10 + 0x20);
              lVar5 = (*pcVar9)(lVar7,local_8,pcVar9);
              uVar3 = uVar4;
              uVar4 = uVar4 + 1;
            } while (lVar5 == 0);
            uVar4 = 1;
            if (local_10 <= uVar3) {
              uVar4 = 0;
            }
          }
        }
        goto LAB_ram_0001a630;
      }
      lVar5 = param_1[4];
      pcVar9 = *(code **)(param_1[5] + 0x18);
    }
  }
  uVar4 = (*pcVar9)(lVar5,local_18,local_20,pcVar9);
LAB_ram_0001a630:
  return uVar4 & 1;
}



// ============================================================
// Function: FUN_ram_0001a648
// Address: ram:0001a648
// Size: 280 bytes
// Called by: FUN_ram_00019b68, FUN_ram_0001a1a8
// ============================================================

void FUN_ram_0001a648(ulonglong *param_1,longlong param_2,ulonglong param_3,byte param_4)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  bVar3 = *(byte *)(param_2 + 0x38);
  if ((bVar3 < 2) || (bVar1 = bVar3 != 2, bVar3 = param_4, bVar1)) {
    uVar6 = param_3;
    uVar8 = 0;
    if (bVar3 != 0) {
      uVar6 = 0;
      uVar8 = param_3;
    }
  }
  else {
    uVar8 = param_3 >> 1;
    uVar6 = param_3 + 1 >> 1;
  }
  lVar9 = uVar8 + 1;
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  lVar10 = *(longlong *)(param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  do {
    lVar9 = lVar9 + -1;
    uVar5 = uVar2;
    if (lVar9 == 0) break;
    pcVar7 = *(code **)(lVar10 + 0x20);
    lVar4 = (*pcVar7)(uVar11,uVar2,pcVar7);
    uVar5 = 0x110000;
  } while (lVar4 == 0);
  *(undefined4 *)(param_1 + 1) = uVar5;
  *param_1 = uVar6;
  return;
}



// ============================================================
// Function: FUN_ram_0001a760
// Address: ram:0001a760
// Size: 48 bytes
// Called by: FUN_ram_00010f48, FUN_ram_00013130
// ============================================================

void FUN_ram_0001a760(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ============================================================
// Function: FUN_ram_0001b578
// Address: ram:0001b578
// Size: 48 bytes
// Called by: FUN_ram_00016b18
// Calls: FUN_ram_0001a1a8
// ============================================================

void FUN_ram_0001b578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_ram_0001a1a8(param_3,param_1,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_0001ba90
// Address: ram:0001ba90
// Size: 8 bytes
// Called by: FUN_ram_0000e1c0
// Calls: FUN_ram_0001deb8
// ============================================================

longlong FUN_ram_0001ba90(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  char *pcVar9;
  
  FUN_ram_0001deb8();
  FUN_ram_0001df80();
  FUN_ram_0001e048();
  pcVar9 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar9 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar6 = param_2 - uVar4, uVar6 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar6 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar9 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar9;
      pcVar9 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar9 = param_1 + uVar4 + (uVar6 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar9 = param_1 + uVar4;
    uVar4 = uVar6 >> 3;
    do {
      uVar6 = uVar4;
      pcVar2 = pcVar9;
      if (uVar6 == 0) {
        return lVar1;
      }
      uVar3 = uVar6;
      if (0xbf < uVar6) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar6) {
        pcVar9 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar9 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar9 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar9 = pcVar9 + 0x20;
        } while (pcVar9 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar9 = pcVar2 + uVar3 * 8;
      uVar4 = uVar6 - uVar3;
    } while ((uVar3 & 3) == 0);
    uVar4 = 0;
    if ((uVar3 & 3) != 0) {
      if (0xbf < uVar6) {
        uVar6 = 0;
      }
      puVar8 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
      uVar4 = 0;
      lVar5 = (uVar6 & 3) << 3;
      do {
        uVar4 = (((*puVar8 ^ 0xffffffffffffffff) >> 7 | *puVar8 >> 6) & 0x101010101010101) + uVar4;
        puVar8 = puVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_0001ba98
// Address: ram:0001ba98
// Size: 8 bytes
// Called by: FUN_ram_00007858, FUN_ram_00005620, FUN_ram_00002368, entrypoint, FUN_ram_000026c0
// Calls: FUN_ram_0001df80
// ============================================================

longlong FUN_ram_0001ba98(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  char *pcVar9;
  
  FUN_ram_0001df80();
  FUN_ram_0001e048();
  pcVar9 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar9 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar6 = param_2 - uVar4, uVar6 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar6 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar9 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar9;
      pcVar9 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar9 = param_1 + uVar4 + (uVar6 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar9 = param_1 + uVar4;
    uVar4 = uVar6 >> 3;
    do {
      uVar6 = uVar4;
      pcVar2 = pcVar9;
      if (uVar6 == 0) {
        return lVar1;
      }
      uVar3 = uVar6;
      if (0xbf < uVar6) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar6) {
        pcVar9 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar9 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar9 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar9 = pcVar9 + 0x20;
        } while (pcVar9 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar9 = pcVar2 + uVar3 * 8;
      uVar4 = uVar6 - uVar3;
    } while ((uVar3 & 3) == 0);
    uVar4 = 0;
    if ((uVar3 & 3) != 0) {
      if (0xbf < uVar6) {
        uVar6 = 0;
      }
      puVar8 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
      uVar4 = 0;
      lVar5 = (uVar6 & 3) << 3;
      do {
        uVar4 = (((*puVar8 ^ 0xffffffffffffffff) >> 7 | *puVar8 >> 6) & 0x101010101010101) + uVar4;
        puVar8 = puVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_0001baa0
// Address: ram:0001baa0
// Size: 8 bytes
// Called by: FUN_ram_000103b0, entrypoint
// Calls: FUN_ram_0001e048
// ============================================================

longlong FUN_ram_0001baa0(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  char *pcVar9;
  
  FUN_ram_0001e048();
  pcVar9 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar9 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar6 = param_2 - uVar4, uVar6 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar6 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar9 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar9;
      pcVar9 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar9 = param_1 + uVar4 + (uVar6 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar9 = param_1 + uVar4;
    uVar4 = uVar6 >> 3;
    do {
      uVar6 = uVar4;
      pcVar2 = pcVar9;
      if (uVar6 == 0) {
        return lVar1;
      }
      uVar3 = uVar6;
      if (0xbf < uVar6) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar6) {
        pcVar9 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar9 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar9 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar9 = pcVar9 + 0x20;
        } while (pcVar9 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar9 = pcVar2 + uVar3 * 8;
      uVar4 = uVar6 - uVar3;
    } while ((uVar3 & 3) == 0);
    uVar4 = 0;
    if ((uVar3 & 3) != 0) {
      if (0xbf < uVar6) {
        uVar6 = 0;
      }
      puVar8 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
      uVar4 = 0;
      lVar5 = (uVar6 & 3) << 3;
      do {
        uVar4 = (((*puVar8 ^ 0xffffffffffffffff) >> 7 | *puVar8 >> 6) & 0x101010101010101) + uVar4;
        puVar8 = puVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_0001baa8
// Address: ram:0001baa8
// Size: 1304 bytes
// Called by: FUN_ram_00019b68, FUN_ram_0001a1a8
// ============================================================

longlong FUN_ram_0001baa8(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  char *pcVar9;
  
  pcVar9 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar9 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar6 = param_2 - uVar4, uVar6 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar6 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar9 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar9;
      pcVar9 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar9 = param_1 + uVar4 + (uVar6 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar9);
        pcVar9 = pcVar9 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar9 = param_1 + uVar4;
    uVar4 = uVar6 >> 3;
    do {
      uVar6 = uVar4;
      pcVar2 = pcVar9;
      if (uVar6 == 0) {
        return lVar1;
      }
      uVar3 = uVar6;
      if (0xbf < uVar6) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar6) {
        pcVar9 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar9 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar9 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar9 = pcVar9 + 0x20;
        } while (pcVar9 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar9 = pcVar2 + uVar3 * 8;
      uVar4 = uVar6 - uVar3;
    } while ((uVar3 & 3) == 0);
    uVar4 = 0;
    if ((uVar3 & 3) != 0) {
      if (0xbf < uVar6) {
        uVar6 = 0;
      }
      puVar8 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
      uVar4 = 0;
      lVar5 = (uVar6 & 3) << 3;
      do {
        uVar4 = (((*puVar8 ^ 0xffffffffffffffff) >> 7 | *puVar8 >> 6) & 0x101010101010101) + uVar4;
        puVar8 = puVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_0001d070
// Address: ram:0001d070
// Size: 88 bytes
// Called by: FUN_ram_00002368
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_0001d070(undefined8 param_1)

{
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = &DAT_ram_00024f00;
  local_10 = 0;
  local_28 = 1;
  local_18 = 0;
  local_20 = 8;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_30,param_1);
}



// ============================================================
// Function: FUN_ram_0001d0c8
// Address: ram:0001d0c8
// Size: 280 bytes
// Called by: FUN_ram_000193e8, FUN_ram_000191d8
// Calls: FUN_ram_000181a8
// ============================================================

ulonglong FUN_ram_0001d0c8(ulonglong param_1)

{
  undefined1 local_51;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_20;
  code *local_18;
  undefined1 *local_10;
  code *local_8;
  
  if ((param_1 & 0xff) < 10) {
    param_1 = param_1 | 0x30;
  }
  else {
    if (0xf < (param_1 & 0xff)) {
      local_51 = (undefined1)param_1;
      local_50 = &DAT_ram_00024f10;
      local_40 = &local_20;
      local_10 = &local_51;
      local_8 = FUN_ram_0001d378;
      local_18 = FUN_ram_0001d378;
      local_20 = &DAT_ram_00023a1b;
      local_30 = 0;
      local_48 = 2;
      local_38 = 2;
                    /* WARNING: Subroutine does not return */
      FUN_ram_000181a8(&local_50,&DAT_ram_00024f30);
    }
    param_1 = param_1 + 0x57;
  }
  return param_1;
}



// ============================================================
// Function: FUN_ram_0001d1e0
// Address: ram:0001d1e0
// Size: 280 bytes
// Called by: FUN_ram_000194e8
// Calls: FUN_ram_000181a8
// ============================================================

ulonglong FUN_ram_0001d1e0(ulonglong param_1)

{
  undefined1 local_51;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_20;
  code *local_18;
  undefined1 *local_10;
  code *local_8;
  
  if ((param_1 & 0xff) < 10) {
    param_1 = param_1 | 0x30;
  }
  else {
    if (0xf < (param_1 & 0xff)) {
      local_51 = (undefined1)param_1;
      local_50 = &DAT_ram_00024f10;
      local_40 = &local_20;
      local_10 = &local_51;
      local_8 = FUN_ram_0001d378;
      local_18 = FUN_ram_0001d378;
      local_20 = &DAT_ram_00023a1b;
      local_30 = 0;
      local_48 = 2;
      local_38 = 2;
                    /* WARNING: Subroutine does not return */
      FUN_ram_000181a8(&local_50,&DAT_ram_00024f48);
    }
    param_1 = param_1 + 0x37;
  }
  return param_1;
}



// ============================================================
// Function: FUN_ram_0001d2f8
// Address: ram:0001d2f8
// Size: 32 bytes
// Calls: FUN_ram_000193e8
// ============================================================

void FUN_ram_0001d2f8(undefined1 *param_1,undefined8 param_2)

{
  FUN_ram_000193e8(param_1,*param_1,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_0001d318
// Address: ram:0001d318
// Size: 32 bytes
// Calls: FUN_ram_000194e8
// ============================================================

void FUN_ram_0001d318(undefined1 *param_1,undefined8 param_2)

{
  FUN_ram_000194e8(param_1,*param_1,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_0001d338
// Address: ram:0001d338
// Size: 32 bytes
// Calls: FUN_ram_000191d8
// ============================================================

void FUN_ram_0001d338(undefined4 *param_1,undefined8 param_2)

{
  FUN_ram_000191d8(param_1,*param_1,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_0001d378
// Address: ram:0001d378
// Size: 40 bytes
// Calls: FUN_ram_0001d3a0
// ============================================================

void FUN_ram_0001d378(undefined1 *param_1,undefined8 param_2)

{
  FUN_ram_0001d3a0(*param_1,1,param_2);
  return;
}



// ============================================================
// Function: FUN_ram_0001d3a0
// Address: ram:0001d3a0
// Size: 360 bytes
// Called by: FUN_ram_0001d378
// Calls: FUN_ram_00019b68
// ============================================================

void FUN_ram_0001d3a0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  byte local_3;
  undefined2 local_2;
  
  bVar2 = (byte)param_1;
  uVar3 = param_1 & 0xff;
  if (uVar3 < 100) {
    lVar1 = 2;
    if (9 < uVar3) {
      local_2 = *(undefined2 *)
                 (
                 "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
                 + (param_1 & 0x7f) * 2 + 0x200b);
      goto LAB_ram_0001d4a0;
    }
  }
  else {
    bVar2 = (byte)(uVar3 / 100);
    local_2 = *(undefined2 *)
               (
               "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
               + ((param_1 + (uVar3 / 100) * -100) * 2 & 0xfe) + 0x200b);
    lVar1 = 0;
  }
  (&local_3)[lVar1] = bVar2 | 0x30;
LAB_ram_0001d4a0:
  FUN_ram_00019b68(param_3,param_2,1,0);
  return;
}



// ============================================================
// Function: FUN_ram_0001d898
// Address: ram:0001d898
// Size: 752 bytes
// Calls: FUN_ram_00019b68
// ============================================================

void FUN_ram_0001d898(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 uStack_c;
  undefined2 auStack_4 [2];
  
  lVar4 = 10;
  if (9999 < (param_1 & 0xffffffff)) {
    uVar3 = param_1;
    lVar1 = 0;
    do {
      lVar4 = lVar1;
      uVar2 = uVar3 & 0xffffffff;
      param_1 = uVar2 / 10000;
      uVar3 = uVar3 + param_1 * -10000;
      uVar5 = (uVar3 & 0xffff) / 100;
      *(undefined2 *)((longlong)auStack_4 + lVar4) =
           *(undefined2 *)
            (
            "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
            + uVar5 * 2 + 0x200b);
      *(undefined2 *)((longlong)auStack_4 + lVar4 + 2) =
           *(undefined2 *)
            (
            "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
            + ((uVar3 + uVar5 * -100) * 2 & 0xfffe) + 0x200b);
      uVar3 = param_1;
      lVar1 = lVar4 + -4;
    } while (99999999 < uVar2);
    lVar4 = lVar4 + 6;
  }
  uVar3 = param_1 & 0xffffffff;
  if (99 < uVar3) {
    uVar2 = (param_1 & 0xffff) / 100;
    *(undefined2 *)((longlong)&uStack_c + lVar4) =
         *(undefined2 *)
          (
          "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
          + ((uVar3 + uVar2 * -100) * 2 & 0xfffe) + 0x200b);
    uVar3 = uVar2;
    lVar4 = lVar4 + -2;
  }
  if (uVar3 < 10) {
    *(byte *)((longlong)&uStack_c + lVar4 + 1) = (byte)uVar3 | 0x30;
  }
  else {
    *(undefined2 *)((longlong)&uStack_c + lVar4) =
         *(undefined2 *)
          (
          "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
          + uVar3 * 2 + 0x200b);
  }
  FUN_ram_00019b68(param_3,param_2,1,0);
  return;
}



// ============================================================
// Function: FUN_ram_0001dbb0
// Address: ram:0001dbb0
// Size: 680 bytes
// Calls: FUN_ram_00019b68
// ============================================================

void FUN_ram_0001dbb0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 uStack_16;
  undefined2 auStack_4 [2];
  
  lVar3 = 0x14;
  if (9999 < param_1) {
    uVar4 = param_1;
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      param_1 = uVar4 / 10000;
      *(undefined2 *)((longlong)auStack_4 + lVar3) =
           *(undefined2 *)
            (
            "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
            + ((uVar4 % 10000) / 100) * 2 + 0x200b);
      *(undefined2 *)((longlong)auStack_4 + lVar3 + 2) =
           *(undefined2 *)
            (
            "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
            + ((uVar4 % 10000) % 100) * 2 + 0x200b);
      bVar1 = 99999999 < uVar4;
      uVar4 = param_1;
      lVar2 = lVar3 + -4;
    } while (bVar1);
    lVar3 = lVar3 + 0x10;
  }
  if (99 < param_1) {
    uVar4 = (param_1 & 0xffff) / 100;
    *(undefined2 *)((longlong)&uStack_16 + lVar3) =
         *(undefined2 *)
          (
          "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
          + ((param_1 + uVar4 * -100) * 2 & 0xfffe) + 0x200b);
    param_1 = uVar4;
    lVar3 = lVar3 + -2;
  }
  if (param_1 < 10) {
    *(byte *)((longlong)&uStack_16 + lVar3 + 1) = (byte)param_1 | 0x30;
  }
  else {
    *(undefined2 *)((longlong)&uStack_16 + lVar3) =
         *(undefined2 *)
          (
          "src/extension/mod.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/slice.rsError/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/string.rs/home/runner/work/platform-tools/platform-tools/out/rust/library/alloc/src/raw_vec.rsDeprecatedInvalidNumericConversionTryingToInitPayerAsProgramAccountDeclaredProgramIdMismatchAccountDuplicateReallocsAccountReallocExceedsLimitAccountSysvarMismatchAccountNotProgramDataAccountNotInitializedAccountNotSystemOwnedInvalidProgramExecutableAccountOwnedByWrongProgramAccountNotMutableAccountNotEnoughKeysAccountDidNotSerializeAccountDidNotDeserializeAccountDiscriminatorMismatchAccountDiscriminatorNotFoundAccountDiscriminatorAlreadySetRequireGteViolatedRequireGtViolatedRequireKeysNeqViolatedRequireNeqViolatedRequireKeysEqViolatedRequireEqViolatedRequireViolatedConstraintMintTransferHookExtensionProgramIdConstraintMintTransferHookExtensionAuthorityConstraintMintTransferHookExtensionConstraintMintPermanentDelegateExtensionDelegateConstraintMintPermanentDelegateExtensionConstraintMintCloseAuthorityExtensionAuthorityConstraintMintCloseAuthorityExtensionConstraintMintMetadataPointerExtensionMetadataAddressConstraintMintMetadataPointerExtensionAuthorityConstraintMintMetadataPointerExtensionConstraintMintGroupMemberPointerExtensionMemberAddressConstraintMintGroupMemberPointerExtensionAuthorityConstraintMintGroupMemberPointerExtensionConstraintMintGroupPointerExtensionGroupAddressConstraintMintGroupPointerExtensionAuthorityConstraintMintGroupPointerExtensionConstraintAssociatedTokenTokenProgramConstraintMintTokenProgramConstraintTokenTokenProgramConstraintAccountIsNoneConstraintSpaceConstraintMintDecimalsConstraintMintFreezeAuthorityConstraintMintMintAuthorityConstraintTokenOwnerConstraintTokenMintConstraintZeroConstraintAddressConstraintCloseConstraintAssociatedInitConstraintAssociatedConstraintStateConstraintExecutableConstraintSeedsConstraintRentExemptConstraintOwnerConstraintRawConstraintMutEventInstructionStubIdlAccountNotEmptyIdlInstruct..." /* TRUNCATED STRING LITERAL */
          + param_1 * 2 + 0x200b);
  }
  FUN_ram_00019b68(param_3,param_2,1,0);
  return;
}



// ============================================================
// Function: FUN_ram_0001deb8
// Address: ram:0001deb8
// Size: 200 bytes
// Called by: FUN_ram_0001ba90
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_0001deb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  local_50 = &DAT_ram_00024f60;
  local_40 = &local_20;
  local_10 = &local_58;
  local_8 = &LAB_ram_0001db88;
  local_18 = &LAB_ram_0001db88;
  local_20 = &local_60;
  local_30 = 0;
  local_48 = 2;
  local_38 = 2;
  local_60 = param_1;
  local_58 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_50,param_3);
}



// ============================================================
// Function: FUN_ram_0001df80
// Address: ram:0001df80
// Size: 200 bytes
// Called by: FUN_ram_0001ba98
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_0001df80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  local_50 = &DAT_ram_00024f80;
  local_40 = &local_20;
  local_10 = &local_58;
  local_8 = &LAB_ram_0001db88;
  local_18 = &LAB_ram_0001db88;
  local_20 = &local_60;
  local_30 = 0;
  local_48 = 2;
  local_38 = 2;
  local_60 = param_1;
  local_58 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_50,param_3);
}



// ============================================================
// Function: FUN_ram_0001e048
// Address: ram:0001e048
// Size: 200 bytes
// Called by: FUN_ram_0001baa0
// Calls: FUN_ram_000181a8
// ============================================================

void FUN_ram_0001e048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  undefined1 *local_8;
  
  local_50 = &DAT_ram_00024fa0;
  local_40 = &local_20;
  local_10 = &local_58;
  local_8 = &LAB_ram_0001db88;
  local_18 = &LAB_ram_0001db88;
  local_20 = &local_60;
  local_30 = 0;
  local_48 = 2;
  local_38 = 2;
  local_60 = param_1;
  local_58 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_ram_000181a8(&local_50,param_3);
}



// ============================================================
// Function: FUN_ram_0001e430
// Address: ram:0001e430
// Size: 32 bytes
// Called by: FUN_ram_00017fb8, FUN_ram_00001340, FUN_ram_00010f48, FUN_ram_0000e1c0, FUN_ram_00005418, entrypoint, FUN_ram_0000ddf0, FUN_ram_000026c0, FUN_ram_0000c6c8
// Calls: sol_memcpy_
// ============================================================

undefined8 FUN_ram_0001e430(undefined8 param_1)

{
  sol_memcpy_();
  return param_1;
}



// ============================================================
// Function: FUN_ram_0001e450
// Address: ram:0001e450
// Size: 40 bytes
// Called by: entrypoint, FUN_ram_0000c7d0
// Calls: sol_memset_
// ============================================================

undefined8 FUN_ram_0001e450(undefined8 param_1,undefined1 param_2)

{
  sol_memset_(param_1,param_2);
  return param_1;
}



// ============================================================
// Function: FUN_ram_0001e478
// Address: ram:0001e478
// Size: 64 bytes
// Called by: FUN_ram_00007858, FUN_ram_00005620, FUN_ram_00000c60, FUN_ram_00002368, entrypoint, FUN_ram_00001ff0, FUN_ram_000026c0
// Calls: sol_memcmp_
// ============================================================

undefined8 FUN_ram_0001e478(void)

{
  sol_memcmp_();
  return 0;
}



// ============================================================
// Function: FUN_ram_0001e4b8
// Address: ram:0001e4b8
// Size: 16 bytes
// Called by: entrypoint
// Calls: FUN_ram_0001e5a8
// ============================================================

void FUN_ram_0001e4b8(void)

{
  FUN_ram_0001e5a8();
  return;
}



// ============================================================
// Function: FUN_ram_0001e4c8
// Address: ram:0001e4c8
// Size: 224 bytes
// Called by: FUN_ram_0001e5a8
// ============================================================

undefined8 FUN_ram_0001e4c8(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if ((((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000001) &&
      ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000001)) &&
     (uVar1 = 1, ((param_2 | param_1) & 0x7fffffffffffffff) != 0)) {
    if ((longlong)(param_2 & param_1) < 0) {
      if ((longlong)param_2 < (longlong)param_1) {
        return 0;
      }
    }
    else if ((longlong)param_1 < (longlong)param_2) {
      return 0;
    }
    uVar1 = 1;
    if (param_1 != param_2) {
      uVar1 = 2;
    }
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_0001e5a8
// Address: ram:0001e5a8
// Size: 120 bytes
// Called by: FUN_ram_0001e818, FUN_ram_0001e4b8
// Calls: FUN_ram_0001e4c8
// ============================================================

longlong FUN_ram_0001e5a8(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = FUN_ram_0001e4c8();
  iVar2 = -1;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      iVar2 = 0;
    }
  }
  else if (bVar1 == 2) {
    iVar2 = 1;
  }
  return (longlong)iVar2;
}



// ============================================================
// Function: FUN_ram_0001e620
// Address: ram:0001e620
// Size: 504 bytes
// Called by: entrypoint
// ============================================================

longlong FUN_ram_0001e620(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    uVar2 = param_1 | param_1 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    uVar2 = (uVar2 | uVar2 >> 0x20) ^ 0xffffffffffffffff;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar3 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    param_1 = param_1 << uVar3;
    uVar2 = param_1 >> 0xb;
    param_1 = param_1 << 0x35;
    lVar1 = ((uVar2 - (uVar3 << 0x34)) -
            ((longlong)(param_1 - (param_1 >> 0x3f & (uVar2 ^ 0xffffffffffffffff))) >> 0x3f)) +
            0x43d0000000000000;
  }
  return lVar1;
}



// ============================================================
// Function: FUN_ram_0001e818
// Address: ram:0001e818
// Size: 16 bytes
// Called by: entrypoint
// Calls: FUN_ram_0001e5a8
// ============================================================

void FUN_ram_0001e818(void)

{
  FUN_ram_0001e5a8();
  return;
}



// ============================================================
// Function: FUN_ram_0001e828
// Address: ram:0001e828
// Size: 72 bytes
// Called by: FUN_ram_0001eb58
// Calls: FUN_ram_0001e870
// ============================================================

void FUN_ram_0001e828(undefined8 *param_1)

{
  undefined8 local_10;
  undefined8 local_8;
  
  FUN_ram_0001e870(&local_10);
  param_1[1] = local_8;
  *param_1 = local_10;
  return;
}



// ============================================================
// Function: FUN_ram_0001e870
// Address: ram:0001e870
// Size: 192 bytes
// Called by: FUN_ram_0001e828
// ============================================================

void FUN_ram_0001e870(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_3 = param_3 << (param_4 & 0x3f) | param_2 >> (-param_4 & 0x3f);
      param_2 = param_2 << (param_4 & 0x3f);
    }
  }
  else {
    param_3 = param_2 << (param_4 & 0x3f);
    param_2 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// ============================================================
// Function: FUN_ram_0001e930
// Address: ram:0001e930
// Size: 200 bytes
// Called by: FUN_ram_00020848
// ============================================================

void FUN_ram_0001e930(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_2 = param_3 << (-param_4 & 0x3f) | param_2 >> (param_4 & 0x3f);
      param_3 = param_3 >> (param_4 & 0x3f);
    }
  }
  else {
    param_2 = param_3 >> (param_4 & 0x3f);
    param_3 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



// ============================================================
// Function: FUN_ram_0001e9f8
// Address: ram:0001e9f8
// Size: 352 bytes
// Called by: FUN_ram_0001ffb8
// ============================================================

void FUN_ram_0001e9f8(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (param_4 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar4 = (param_4 >> 0x20) * (param_2 & 0xffffffff);
  uVar1 = uVar4 + (param_4 & 0xffffffff) * (param_2 >> 0x20);
  uVar3 = uVar2 + (uVar1 << 0x20);
  *param_1 = uVar3;
  param_1[1] = (param_4 >> 0x20) * (param_2 >> 0x20) +
               ((ulonglong)(uVar1 < uVar4) << 0x20 | uVar1 >> 0x20) + (ulonglong)(uVar3 < uVar2) +
               param_5 * param_2 + param_4 * param_3;
  return;
}



// ============================================================
// Function: FUN_ram_0001eb58
// Address: ram:0001eb58
// Size: 5216 bytes
// Called by: FUN_ram_00020890
// Calls: FUN_ram_0001ffb8, FUN_ram_0001e828, FUN_ram_00020848
// ============================================================

void FUN_ram_0001eb58(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     ulonglong param_5)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90 [2];
  ulonglong local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60 [2];
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20 [2];
  ulonglong local_10 [2];
  
  uVar4 = param_5 | param_5 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar6 = param_3 | param_3 >> 1;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar8 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (param_3 == 0) {
    uVar4 = param_2 | param_2 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  uVar6 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (param_5 == 0) {
    uVar6 = param_4 | param_4 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  if (uVar6 <= uVar4) {
    uVar8 = 0;
    bVar2 = param_2 < param_4;
    if (param_3 != param_5) {
      bVar2 = param_3 < param_5;
    }
    uVar5 = 0;
    if (!bVar2) {
      uVar5 = 0;
      uVar8 = 1;
      param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
      param_2 = param_2 - param_4;
    }
    goto LAB_ram_0001f2e8;
  }
  if (uVar4 < 0x40) {
    if (uVar6 < 0x60) {
      if ((uVar6 - uVar4 & 0xffffffff) < 0x20) {
        lVar7 = (longlong)(0x40 - (int)uVar4);
        FUN_ram_00020848(local_80,param_4,param_5,lVar7);
        FUN_ram_00020848(local_90,param_2,param_3,lVar7);
        uVar8 = local_90[0] / local_80[0];
        FUN_ram_0001ffb8(&local_a0,param_4,0,uVar8,0);
        FUN_ram_0001ffb8(&local_b0,param_5,0,uVar8,0);
        uVar4 = local_98 + local_b0;
        if (local_a8 + (ulonglong)(uVar4 < local_98) == 0) {
          bVar2 = param_2 < local_a0;
          if (param_3 != uVar4) {
            bVar2 = param_3 < uVar4;
          }
          if (!bVar2) {
            uVar5 = 0;
            param_3 = (param_3 - uVar4) - (ulonglong)(param_2 < local_a0);
            param_2 = param_2 - local_a0;
            goto LAB_ram_0001f2e8;
          }
        }
        param_2 = param_4 + param_2;
        uVar5 = 0;
        param_3 = ((param_5 + param_3 + (ulonglong)(param_2 < param_4)) - uVar4) -
                  (ulonglong)(param_2 < local_a0);
        param_2 = param_2 - local_a0;
        uVar8 = uVar8 - 1;
      }
      else {
        uVar1 = 0x60 - uVar6;
        FUN_ram_00020848(local_10,param_4,param_5,(longlong)(int)uVar1);
        uVar8 = 0;
        uVar5 = 0;
        do {
          uVar4 = 0x40 - uVar4;
          FUN_ram_00020848(local_20,param_2,param_3,(longlong)(int)uVar4);
          if ((uVar4 & 0xffffffff) < (uVar1 & 0xffffffff)) {
            FUN_ram_00020848(local_60,param_4,param_5,(longlong)(int)uVar4);
            if (local_60[0] != 0) {
              local_20[0] = local_20[0] / local_60[0];
            }
            FUN_ram_0001ffb8(&local_70,local_20[0],0,param_4,param_5);
            bVar2 = param_2 < local_70;
            if (param_3 != local_68) {
              bVar2 = param_3 < local_68;
            }
            if (bVar2) {
              param_4 = param_2 + param_4;
              uVar4 = (local_20[0] + uVar8) - 1;
              param_3 = ((param_3 + param_5 + (ulonglong)(param_4 < param_2)) - local_68) -
                        (ulonglong)(param_4 < local_70);
              param_2 = param_4 - local_70;
              uVar5 = uVar5 + (uVar4 < uVar8);
              uVar8 = uVar4;
            }
            else {
              param_3 = (param_3 - local_68) - (ulonglong)(param_2 < local_70);
              param_2 = param_2 - local_70;
              uVar5 = uVar5 + (uVar8 + local_20[0] < uVar8);
              uVar8 = uVar8 + local_20[0];
            }
            goto LAB_ram_0001f2e8;
          }
          uVar3 = local_20[0] / ((local_10[0] & 0xffffffff) + 1);
          uVar4 = uVar4 - uVar1 & 0x7f;
          FUN_ram_0001e828(&local_30,uVar3,0,uVar4);
          FUN_ram_0001ffb8(&local_40,uVar3,0,param_4,param_5);
          FUN_ram_0001e828(&local_50,local_40,local_38,uVar4);
          uVar8 = local_30 + uVar8;
          param_3 = (param_3 - local_48) - (ulonglong)(param_2 < local_50);
          uVar4 = param_3 | param_3 >> 1;
          uVar4 = uVar4 | uVar4 >> 2;
          param_2 = param_2 - local_50;
          uVar4 = uVar4 | uVar4 >> 4;
          uVar4 = uVar4 | uVar4 >> 8;
          uVar4 = uVar4 | uVar4 >> 0x10;
          uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
          uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
          uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
          uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (param_3 == 0) {
            uVar4 = param_2 | param_2 >> 1;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = uVar4 | uVar4 >> 8;
            uVar4 = uVar4 | uVar4 >> 0x10;
            uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
            uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
            uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
            uVar4 = ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
          }
          uVar5 = local_28 + uVar5 + (ulonglong)(uVar8 < local_30);
          if (uVar6 <= uVar4) {
            bVar2 = param_2 < param_4;
            if (param_3 != param_5) {
              bVar2 = param_3 < param_5;
            }
            if (!bVar2) {
              uVar8 = uVar8 + 1;
              param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
              uVar5 = uVar5 + (uVar8 == 0);
              param_2 = param_2 - param_4;
            }
            goto LAB_ram_0001f2e8;
          }
        } while (uVar4 < 0x40);
        uVar4 = uVar5;
        if (param_4 != 0) {
          uVar4 = param_2 / param_4;
        }
        param_3 = 0;
        param_2 = param_2 % param_4;
        uVar5 = uVar5 + (uVar8 + uVar4 < uVar8);
        uVar8 = uVar8 + uVar4;
      }
      goto LAB_ram_0001f2e8;
    }
    uVar6 = param_4 & 0xffffffff;
    uVar4 = (param_3 - (param_3 / uVar6) * param_4 << 0x20 | param_2 >> 0x20) / uVar6;
    uVar5 = uVar4 >> 0x20 | param_3 / uVar6;
    param_2 = (param_2 >> 0x20) - uVar4 * param_4 << 0x20 | param_2 & 0xffffffff;
    uVar1 = param_2 / uVar6;
    uVar8 = uVar4 << 0x20 | uVar1;
    param_2 = param_2 - uVar1 * uVar6;
  }
  else {
    uVar8 = param_2 / param_4;
    param_2 = param_2 - uVar8 * param_4;
    uVar5 = 0;
  }
  param_3 = 0;
LAB_ram_0001f2e8:
  param_1[2] = param_2;
  *param_1 = uVar8;
  param_1[3] = param_3;
  param_1[1] = uVar5;
  return;
}



// ============================================================
// Function: FUN_ram_0001ffb8
// Address: ram:0001ffb8
// Size: 72 bytes
// Called by: FUN_ram_00005620, FUN_ram_000170d0, FUN_ram_00002368, FUN_ram_0001eb58, FUN_ram_00020000
// Calls: FUN_ram_0001e9f8
// ============================================================

void FUN_ram_0001ffb8(undefined8 *param_1)

{
  undefined8 local_10;
  undefined8 local_8;
  
  FUN_ram_0001e9f8(&local_10);
  param_1[1] = local_8;
  *param_1 = local_10;
  return;
}



// ============================================================
// Function: FUN_ram_00020000
// Address: ram:00020000
// Size: 1928 bytes
// Called by: FUN_ram_000208d8
// Calls: FUN_ram_0001ffb8
// ============================================================

ulonglong FUN_ram_00020000(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar6 = (param_2 ^ param_1) & 0x8000000000000000;
  uVar3 = param_2 & 0xfffffffffffff;
  uVar4 = param_1 & 0xfffffffffffff;
  uVar7 = param_2 >> 0x34 & 0x7ff;
  uVar8 = param_1 >> 0x34 & 0x7ff;
  if ((uVar8 - 0x7ff < 0xfffffffffffff802) || (lVar9 = 0, uVar7 - 0x7ff < 0xfffffffffffff802)) {
    uVar5 = param_1 & 0x7fffffffffffffff;
    if (0x7ff0000000000000 < uVar5) {
      return param_1 | 0x8000000000000;
    }
    uVar2 = param_2 & 0x7fffffffffffffff;
    if (0x7ff0000000000000 < uVar2) {
      return param_2 | 0x8000000000000;
    }
    uVar1 = uVar2;
    if ((uVar5 == 0x7ff0000000000000) || (uVar1 = uVar5, uVar2 == 0x7ff0000000000000)) {
      if (uVar1 == 0) {
        return 0x7ff8000000000000;
      }
      goto LAB_ram_000202e0;
    }
    if (uVar5 == 0) {
      return uVar6;
    }
    if (uVar2 == 0) {
      return uVar6;
    }
    lVar9 = 0;
    if (uVar5 < 0x10000000000000) {
      uVar5 = 0x40;
      if (uVar4 != 0) {
        uVar5 = uVar4 | uVar4 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = (uVar5 | uVar5 >> 0x20) ^ 0xffffffffffffffff;
        uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
        uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      }
      lVar9 = 0xc - uVar5;
      uVar4 = uVar4 << (uVar5 + 0x35 & 0x3f);
    }
    if (uVar2 < 0x10000000000000) {
      uVar5 = 0x40;
      if (uVar3 != 0) {
        uVar5 = uVar3 | uVar3 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = (uVar5 | uVar5 >> 0x20) ^ 0xffffffffffffffff;
        uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
        uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      }
      uVar3 = uVar3 << (uVar5 + 0x35 & 0x3f);
      lVar9 = (lVar9 - uVar5) + 0xc;
    }
  }
  FUN_ram_0001ffb8(&local_10,uVar3 << 0xb | 0x8000000000000000,0,uVar4 | 0x10000000000000,0);
  lVar9 = uVar7 + uVar8 + lVar9;
  if ((local_8 & 0x10000000000000) == 0) {
    local_8 = local_8 << 1 | local_10 >> 0x3f;
    local_10 = local_10 << 1;
    lVar9 = lVar9 + -0x3ff;
  }
  else {
    lVar9 = lVar9 + -0x3fe;
  }
  if (lVar9 < 0x7ff) {
    if (lVar9 < 1) {
      uVar3 = 1 - lVar9;
      if (0x3f < uVar3) {
        return uVar6;
      }
      uVar4 = lVar9 + 0x3fU & 0xffffffff;
      local_10 = local_10 >> uVar3 | local_8 << uVar4 | (ulonglong)(local_10 << uVar4 != 0);
      local_8 = local_8 >> uVar3;
    }
    else {
      local_8 = lVar9 << 0x34 | local_8 & 0xfffffffffffff;
    }
    uVar6 = local_8 | uVar6;
    if (local_10 < 0x8000000000000001) {
      if (local_10 != 0x8000000000000000) {
        return uVar6;
      }
      return uVar6 + (local_8 & 1);
    }
    return uVar6 + 1;
  }
LAB_ram_000202e0:
  return uVar6 | 0x7ff0000000000000;
}



// ============================================================
// Function: FUN_ram_00020788
// Address: ram:00020788
// Size: 192 bytes
// Called by: entrypoint
// ============================================================

ulonglong FUN_ram_00020788(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (0x3fefffffffffffff < param_1) {
    if (param_1 < 0x43f0000000000000) {
      uVar1 = (param_1 << 0xb | 0x8000000000000000) >> (0x3e - (param_1 >> 0x34) & 0x3f);
    }
    else if (param_1 < 0x7ff0000000000001) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  return uVar1;
}



// ============================================================
// Function: FUN_ram_00020848
// Address: ram:00020848
// Size: 72 bytes
// Called by: FUN_ram_0001eb58
// Calls: FUN_ram_0001e930
// ============================================================

void FUN_ram_00020848(undefined8 *param_1)

{
  undefined8 local_10;
  undefined8 local_8;
  
  FUN_ram_0001e930(&local_10);
  param_1[1] = local_8;
  *param_1 = local_10;
  return;
}



// ============================================================
// Function: FUN_ram_00020890
// Address: ram:00020890
// Size: 72 bytes
// Called by: FUN_ram_00005620, FUN_ram_00002368
// Calls: FUN_ram_0001eb58
// ============================================================

void FUN_ram_00020890(undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_ram_0001eb58(&local_20);
  param_1[1] = local_18;
  *param_1 = local_20;
  return;
}



// ============================================================
// Function: FUN_ram_000208d8
// Address: ram:000208d8
// Size: 16 bytes
// Called by: entrypoint
// Calls: FUN_ram_00020000
// ============================================================

void FUN_ram_000208d8(void)

{
  FUN_ram_00020000();
  return;
}



// ============================================================
// Function: abort
// Address: ram:00029020
// Size: 1 bytes
// ============================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_log_
// Address: syscall:207559bd
// Size: 1 bytes
// Called by: FUN_ram_00016ed8, FUN_ram_00005418, custom_panic, entrypoint, FUN_ram_000026c0
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_log_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_memset_
// Address: syscall:3770fb22
// Size: 1 bytes
// Called by: FUN_ram_0001e450
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_memset_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_log_compute_units_
// Address: syscall:52ba5096
// Size: 1 bytes
// Called by: FUN_ram_000026c0
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_log_compute_units_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_memcmp_
// Address: syscall:5fdcde31
// Size: 1 bytes
// Called by: FUN_ram_0001e478
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_memcmp_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_memcpy_
// Address: syscall:717cc4a3
// Size: 1 bytes
// Called by: FUN_ram_0001e430, FUN_ram_000026c0
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_memcpy_(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_invoke_signed_c
// Address: syscall:a22b9c85
// Size: 1 bytes
// Called by: FUN_ram_00005d20, FUN_ram_00007c80, FUN_ram_00007858, FUN_ram_0000c998, FUN_ram_00005620, FUN_ram_00005fe8, FUN_ram_0000cde0, FUN_ram_00006e00, entrypoint, FUN_ram_00001ff0
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_invoke_signed_c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: abort
// Address: syscall:b6fc1a11
// Size: 1 bytes
// Called by: abort
// ============================================================

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ============================================================
// Function: sol_get_rent_sysvar
// Address: syscall:bf7188f6
// Size: 1 bytes
// Called by: FUN_ram_000137a0
// ============================================================

/* WARNING: Control flow encountered bad instruction data */

void sol_get_rent_sysvar(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



