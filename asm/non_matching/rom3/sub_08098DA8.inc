	THUMB_FUNC_START sub_08098DA8
sub_08098DA8: @ 0x08098DA8
	push {lr}
	bl sub_0809E600
	ldr r2, _08098DFC  @ =gRam
	ldr r1, _08098E00  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08098DC8
	ldr r3, _08098E04  @ =0x00001806
	add r1, r2, r3
	ldrb r0, [r1]
	cmp r0, #15
	bls _08098E10
_08098DC8:
	ldr r1, _08098E04  @ =0x00001806
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _08098E08  @ =0x00001719
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #236
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #76
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _08098E0C  @ =0x000016EA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #8
	bhi _08098E14
	sub r3, r3, #179
	add r1, r2, r3
	mov r0, #0
	b _08098E12
	.byte 0x00
	.byte 0x00
_08098DFC:
	.4byte gRam
_08098E00:
	.4byte 0x00000545
_08098E04:
	.4byte 0x00001806
_08098E08:
	.4byte 0x00001719
_08098E0C:
	.4byte 0x000016EA
_08098E10:
	add r0, r0, #1
_08098E12:
	strb r0, [r1]
_08098E14:
	bl sub_08096F30
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08098DA8

