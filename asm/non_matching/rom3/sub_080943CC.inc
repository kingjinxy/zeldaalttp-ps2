	THUMB_FUNC_START sub_080943CC
sub_080943CC: @ 0x080943CC
	push {r4,lr}
	ldr r3, _080943E4  @ =gRam
	ldr r1, _080943E8  @ =0x00000B14
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080943DE
	cmp r0, #4
	bne _080943EC
_080943DE:
	mov r0, #0
	b _0809445A
	.byte 0x00
	.byte 0x00
_080943E4:
	.4byte gRam
_080943E8:
	.4byte 0x00000B14
_080943EC:
	cmp r0, #1
	bls _08094450
	ldr r2, _08094438  @ =0x00000956
	add r0, r3, r2
	ldr r4, _0809443C  @ =0x00000958
	add r1, r3, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r2, r3, r4
	sub r0, r0, r1
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r2, _08094440  @ =0x000017A2
	add r1, r3, r2
	strh r0, [r1]
	mov r4, #149
	lsl r4, r4, #4
	add r0, r3, r4
	ldr r2, _08094444  @ =0x00000952
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	ldr r4, _08094448  @ =0x000016C4
	add r2, r3, r4
	sub r0, r0, r1
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r2, _0809444C  @ =0x000017A4
	add r1, r3, r2
	strh r0, [r1]
	mov r4, #161
	lsl r4, r4, #4
	add r1, r3, r4
	b _08094456
_08094438:
	.4byte 0x00000956
_0809443C:
	.4byte 0x00000958
_08094440:
	.4byte 0x000017A2
_08094444:
	.4byte 0x00000952
_08094448:
	.4byte 0x000016C4
_0809444C:
	.4byte 0x000017A4
_08094450:
	mov r0, #161
	lsl r0, r0, #4
	add r1, r3, r0
_08094456:
	mov r0, #1
	strb r0, [r1]
_0809445A:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080943CC

