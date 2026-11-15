	THUMB_FUNC_START sub_08079E5C
sub_08079E5C: @ 0x08079E5C
	push {r4-r6,lr}
	ldr r5, _08079ED0  @ =gRam
	ldr r0, _08079ED4  @ =0x00000AD6
	add r6, r5, r0
	ldrh r4, [r6]
	cmp r4, #0
	bne _08079EF0
	bl sub_080798DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08079EFE
	mov r1, #192
	lsl r1, r1, #4
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _08079ED8  @ =0x00000C02
	add r0, r5, r2
	strh r4, [r0]
	ldr r3, _08079EDC  @ =0x000016C4
	add r0, r5, r3
	ldr r2, _08079EE0  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08079EE4  @ =0x00000504
	add r1, r5, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldr r3, _08079EE8  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08079EEC  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #59
	bl sub_0812A324
	mov r0, #5
	bl sub_08079DBC
	mov r0, #177
	lsl r0, r0, #4
	add r2, r5, r0
	ldrh r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strh r0, [r2]
	ldrh r0, [r6]
	add r0, r0, #1
	b _08079EFC
	.byte 0x00
	.byte 0x00
_08079ED0:
	.4byte gRam
_08079ED4:
	.4byte 0x00000AD6
_08079ED8:
	.4byte 0x00000C02
_08079EDC:
	.4byte 0x000016C4
_08079EE0:
	.4byte 0x00000952
_08079EE4:
	.4byte 0x00000504
_08079EE8:
	.4byte 0x00000958
_08079EEC:
	.4byte 0x00000506
_08079EF0:
	bl sub_080798DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08079EFE
_08079EFC:
	strh r0, [r6]
_08079EFE:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08079E5C

