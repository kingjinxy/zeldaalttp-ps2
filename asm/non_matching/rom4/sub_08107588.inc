	THUMB_FUNC_START sub_08107588
sub_08107588: @ 0x08107588
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _08107698  @ =gRam
	ldr r0, _0810769C  @ =0x000009B4
	add r1, r7, r0
	mov r2, #0
	mov r0, #23
	strb r0, [r1]
	ldr r1, _081076A0  @ =0x000009B5
	add r0, r7, r1
	strb r2, [r0]
	add r0, r6, #0
	bl sub_08107EB4
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _081075BA
	b _0810790A
_081075BA:
	ldr r2, _081076A4  @ =0x00000F52
	add r0, r7, r2
	add r0, r0, r6
	mov r8, r0
	ldrb r3, [r0]
	mov r0, #128
	mov r9, r0
	and r0, r0, r3
	cmp r0, #0
	bne _081075D0
	b _081077DC
_081075D0:
	ldr r1, _081076A8  @ =0x00001649
	add r0, r7, r1
	strb r3, [r0]
	add r2, r2, #112
	add r0, r7, r2
	add r4, r6, r0
	ldrb r1, [r4]
	add r5, r1, #0
	cmp r5, #0
	bne _081075E6
	b _08107744
_081075E6:
	cmp r5, #254
	bls _081075EC
	b _0810790A
_081075EC:
	cmp r5, #223
	bhi _081076DC
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08107600
	add r0, r6, #0
	mov r1, #41
	bl sub_080CF0AC
_08107600:
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0810768A
	bl GetRandomInt
	mov r4, #7
	add r3, r4, #0
	and r3, r3, r0
	ldr r1, _081076AC  @ =0x00000EE2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r2, [r0]
	add r1, r1, #32
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _081076B0  @ =gUnknown_0817BFB8
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _081076B4  @ =gUnknown_0817BFC0
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _081076B8  @ =0x00001622
	add r0, r7, r3
	strb r2, [r0]
	lsr r2, r2, #8
	ldr r1, _081076BC  @ =0x00001623
	add r0, r7, r1
	strb r2, [r0]
	bl GetRandomInt
	and r4, r4, r0
	ldr r2, _081076C0  @ =0x00000ED2
	add r0, r7, r2
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r3, _081076C4  @ =0x00000EF2
	add r0, r7, r3
	add r0, r6, r0
	ldrb r2, [r0]
	lsl r2, r2, #8
	ldr r0, _081076C8  @ =gUnknown_0817BFC8
	add r0, r4, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _081076CC  @ =gUnknown_0817BFD0
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #8
	ldr r2, _081076D0  @ =0x00001624
	add r0, r7, r2
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _081076D4  @ =0x00001625
	add r0, r7, r3
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080D96A0
_0810768A:
	ldr r1, _081076D8  @ =0x00001082
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #255
	strb r1, [r0]
	b _0810790A
	.byte 0x00
	.byte 0x00
_08107698:
	.4byte gRam
_0810769C:
	.4byte 0x000009B4
_081076A0:
	.4byte 0x000009B5
_081076A4:
	.4byte 0x00000F52
_081076A8:
	.4byte 0x00001649
_081076AC:
	.4byte 0x00000EE2
_081076B0:
	.4byte gUnknown_0817BFB8
_081076B4:
	.4byte gUnknown_0817BFC0
_081076B8:
	.4byte 0x00001622
_081076BC:
	.4byte 0x00001623
_081076C0:
	.4byte 0x00000ED2
_081076C4:
	.4byte 0x00000EF2
_081076C8:
	.4byte gUnknown_0817BFC8
_081076CC:
	.4byte gUnknown_0817BFD0
_081076D0:
	.4byte 0x00001624
_081076D4:
	.4byte 0x00001625
_081076D8:
	.4byte 0x00001082
_081076DC:
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _081076F4
	ldr r2, _08107728  @ =0x0000179A
	add r1, r7, r2
	ldr r0, _0810772C  @ =0x0000FFFF
	strh r0, [r1]
	ldr r3, _08107730  @ =0x00000ACE
	add r1, r7, r3
	mov r0, #1
	strh r0, [r1]
_081076F4:
	ldr r1, _08107734  @ =0x00000F12
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #248
	strb r1, [r0]
	add r0, r6, #0
	bl Sprite3_MoveVert
	add r0, r6, #0
	bl sub_08107520
	ldr r2, _08107738  @ =0x00000F82
	add r1, r7, r2
	add r1, r6, r1
	ldr r3, _0810773C  @ =0x00000ED2
	add r0, r7, r3
	add r0, r6, r0
	ldrb r0, [r0]
	sub r0, r0, #12
	strb r0, [r1]
	ldr r1, _08107740  @ =gUnknown_02010997
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	b _0810790A
	.byte 0x00
	.byte 0x00
_08107728:
	.4byte 0x0000179A
_0810772C:
	.4byte 0x0000FFFF
_08107730:
	.4byte 0x00000ACE
_08107734:
	.4byte 0x00000F12
_08107738:
	.4byte 0x00000F82
_0810773C:
	.4byte 0x00000ED2
_08107740:
	.4byte gUnknown_02010997
_08107744:
	ldr r1, _081077B4  @ =gUnknown_02010998
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080D97A0
	ldr r1, _081077B8  @ =0x00001052
	add r0, r7, r1
	add r0, r6, r0
	strb r5, [r0]
	ldr r2, _081077BC  @ =0x00001082
	add r0, r7, r2
	add r0, r6, r0
	strb r5, [r0]
	ldr r3, _081077C0  @ =0x00001032
	add r1, r7, r3
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _081077C4  @ =0x00000E75
	add r0, r7, r1
	add r0, r6, r0
	mov r2, r9
	strb r2, [r0]
	mov r3, r8
	strb r5, [r3]
	ldr r1, _081077C8  @ =0x00000FB2
	add r0, r7, r1
	add r0, r6, r0
	strb r5, [r0]
	ldr r2, _081077CC  @ =0x00000F62
	add r4, r7, r2
	add r4, r6, r4
	strb r5, [r4]
	ldr r3, _081077D0  @ =0x00001092
	add r0, r7, r3
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C351C
	mov r0, r9
	strb r0, [r4]
	ldr r1, _081077D4  @ =0x0000179A
	add r2, r7, r1
	ldrh r1, [r2]
	ldr r3, _081077D8  @ =0xFFFFFF00
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	b _0810790A
	.byte 0x00
	.byte 0x00
_081077B4:
	.4byte gUnknown_02010998
_081077B8:
	.4byte 0x00001052
_081077BC:
	.4byte 0x00001082
_081077C0:
	.4byte 0x00001032
_081077C4:
	.4byte 0x00000E75
_081077C8:
	.4byte 0x00000FB2
_081077CC:
	.4byte 0x00000F62
_081077D0:
	.4byte 0x00001092
_081077D4:
	.4byte 0x0000179A
_081077D8:
	.4byte 0xFFFFFF00
_081077DC:
	ldr r1, _0810783C  @ =0x00000FA3
	add r0, r7, r1
	ldr r2, _08107840  @ =0x00000FA4
	add r1, r7, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _081077F8
	lsl r0, r3, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _081077F8
	b _081078F0
_081077F8:
	add r0, r6, #0
	bl sub_08107D50
	add r0, r6, #0
	bl sub_08107DBC
	add r0, r6, #0
	bl sub_080C5044
	ldr r3, _08107844  @ =0x00000996
	add r0, r7, r3
	ldrb r0, [r0]
	mov r4, #63
	and r4, r4, r0
	cmp r4, #0
	bne _0810785E
	add r0, r6, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _08107848  @ =0x0000097D
	add r0, r7, r1
	ldrb r0, [r0]
	add r0, r0, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #47
	bhi _08107850
	ldr r2, _0810784C  @ =0x00000F92
	add r0, r7, r2
	add r0, r6, r0
	strb r4, [r0]
	b _0810785E
_0810783C:
	.4byte 0x00000FA3
_08107840:
	.4byte 0x00000FA4
_08107844:
	.4byte 0x00000996
_08107848:
	.4byte 0x0000097D
_0810784C:
	.4byte 0x00000F92
_08107850:
	ldr r3, _081078A8  @ =0x00000F92
	add r0, r7, r3
	add r0, r6, r0
	ldr r1, _081078AC  @ =gUnknown_0817BFD8
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
_0810785E:
	ldr r3, _081078B0  @ =gUnknown_02010996
	ldrb r2, [r3]
	cmp r2, #0
	bne _081078D0
	ldr r2, _081078B4  @ =gRam
	ldr r1, _081078B8  @ =0x00000FA3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810787C
	ldr r3, _081078BC  @ =0x00000F53
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #3
	beq _0810790A
_0810787C:
	ldr r1, _081078C0  @ =0x00000FA4
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08107890
	ldr r3, _081078C4  @ =0x00000F54
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #3
	beq _0810790A
_08107890:
	ldr r1, _081078C8  @ =gUnknown_0817BFDC
	ldr r3, _081078CC  @ =0x00000F52
	add r0, r2, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
	b _0810790A
_081078A8:
	.4byte 0x00000F92
_081078AC:
	.4byte gUnknown_0817BFD8
_081078B0:
	.4byte gUnknown_02010996
_081078B4:
	.4byte gRam
_081078B8:
	.4byte 0x00000FA3
_081078BC:
	.4byte 0x00000F53
_081078C0:
	.4byte 0x00000FA4
_081078C4:
	.4byte 0x00000F54
_081078C8:
	.4byte gUnknown_0817BFDC
_081078CC:
	.4byte 0x00000F52
_081078D0:
	ldr r0, _081078E8  @ =gRam
	ldr r1, _081078EC  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0810790A
	sub r0, r2, #1
	strb r0, [r3]
	b _0810790A
	.byte 0x00
	.byte 0x00
_081078E8:
	.4byte gRam
_081078EC:
	.4byte 0x00000996
_081078F0:
	ldr r2, _08107918  @ =0x00000FC2
	add r0, r7, r2
	add r0, r6, r0
	mov r1, #255
	strb r1, [r0]
	mov r0, #1
	neg r0, r0
	mov r3, r8
	strb r0, [r3]
	mov r0, #96
	mov r1, #0
	bl sub_0812A324
_0810790A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08107918:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08107588

