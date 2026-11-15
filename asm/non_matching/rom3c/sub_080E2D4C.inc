	THUMB_FUNC_START sub_080E2D4C
sub_080E2D4C: @ 0x080E2D4C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080E34CC
	ldr r6, _080E2E00  @ =gRam
	ldr r1, _080E2E04  @ =0x00000F52
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #1
	bhi _080E2D70
	ldr r2, _080E2E08  @ =0x000015ED
	add r1, r6, r2
	mov r0, #128
	strb r0, [r1]
_080E2D70:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2DF8
	add r0, r4, #0
	bl sub_080C3964
	ldr r0, _080E2E0C  @ =0x00000F62
	add r2, r6, r0
	add r2, r4, r2
	ldrb r1, [r2]
	ldr r3, _080E2E10  @ =gUnknown_08176E98
	ldrb r0, [r5]
	sub r0, r0, #2
	add r0, r0, r3
	ldrb r0, [r0]
	add r1, r1, r0
	strb r1, [r2]
	ldr r0, _080E2E14  @ =0x00000F72
	add r2, r6, r0
	add r2, r4, r2
	lsr r1, r1, #8
	ldrb r0, [r2]
	add r1, r1, r0
	mov r0, #1
	and r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E2DF8
	add r0, r4, #0
	bl sub_080C6F48
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C4F98
	ldr r1, _080E2E18  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E2DE8
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080E2E1C  @ =0x00001082
	add r1, r6, r2
	add r1, r4, r1
	strb r0, [r1]
_080E2DE8:
	ldr r0, _080E2E20  @ =gUnknown_08176E9C
	ldrb r1, [r5]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r7, #0
	bl _call_via_r1
_080E2DF8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2E00:
	.4byte gRam
_080E2E04:
	.4byte 0x00000F52
_080E2E08:
	.4byte 0x000015ED
_080E2E0C:
	.4byte 0x00000F62
_080E2E10:
	.4byte gUnknown_08176E98
_080E2E14:
	.4byte 0x00000F72
_080E2E18:
	.4byte 0x00000996
_080E2E1C:
	.4byte 0x00001082
_080E2E20:
	.4byte gUnknown_08176E9C
	THUMB_FUNC_END sub_080E2D4C

