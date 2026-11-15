	THUMB_FUNC_START sub_080E1F50
sub_080E1F50: @ 0x080E1F50
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E1FC8  @ =gRam
	ldr r1, _080E1FCC  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E1FE4
	ldr r2, _080E1FD0  @ =0x00000996
	add r0, r6, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080E1FBA
	ldr r3, _080E1FD4  @ =0x000010A2
	add r0, r6, r3
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E1F90
	add r0, r4, #0
	mov r1, #81
	bl sub_080CF140
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080E1F90:
	mov r0, #3
	and r0, r0, r4
	ldr r1, _080E1FD8  @ =gUnknown_081769C8
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C35FC
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E1FDC  @ =0x00000FB2
	add r1, r6, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r3, _080E1FE0  @ =0x00001082
	add r1, r6, r3
	add r1, r4, r1
	strb r0, [r1]
_080E1FBA:
	add r0, r4, #0
	bl sub_080E2024
	add r0, r4, #0
	bl sub_080E2858
	b _080E200E
_080E1FC8:
	.4byte gRam
_080E1FCC:
	.4byte 0x00000FC2
_080E1FD0:
	.4byte 0x00000996
_080E1FD4:
	.4byte 0x000010A2
_080E1FD8:
	.4byte gUnknown_081769C8
_080E1FDC:
	.4byte 0x00000FB2
_080E1FE0:
	.4byte 0x00001082
_080E1FE4:
	ldr r0, _080E2014  @ =0x00001092
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E2018  @ =gUnknown_081769CC
	ldr r3, _080E201C  @ =0x00000FB2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E2614
	ldr r1, _080E2020  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	mov r0, #160
	strb r0, [r5]
_080E200E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E2014:
	.4byte 0x00001092
_080E2018:
	.4byte gUnknown_081769CC
_080E201C:
	.4byte 0x00000FB2
_080E2020:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E1F50

