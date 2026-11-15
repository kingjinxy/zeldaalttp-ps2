	THUMB_FUNC_START sub_08134B7C
sub_08134B7C: @ 0x08134B7C
	push {r4-r6,lr}
	add r2, r0, #0
	ldr r0, _08134BFC  @ =gUnknown_03007FF0
	ldr r4, [r0]
	mov r0, #240
	lsl r0, r0, #12
	and r0, r0, r2
	lsr r2, r0, #16
	mov r6, #0
	strb r2, [r4, #8]
	ldr r1, _08134C00  @ =gUnknown_083C27C8
	sub r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r5, [r0]
	str r5, [r4, #16]
	mov r0, #198
	lsl r0, r0, #3
	add r1, r5, #0
	bl __divsi3
	strb r0, [r4, #11]
	ldr r0, _08134C04  @ =0x00091D1B
	mul r0, r5, r0
	ldr r1, _08134C08  @ =0x00001388
	add r0, r0, r1
	ldr r1, _08134C0C  @ =0x00002710
	bl __divsi3
	add r1, r0, #0
	str r1, [r4, #20]
	mov r0, #128
	lsl r0, r0, #17
	bl __divsi3
	add r0, r0, #1
	asr r0, r0, #1
	str r0, [r4, #24]
	ldr r0, _08134C10  @ =0x04000102
	strh r6, [r0]
	ldr r4, _08134C14  @ =0x04000100
	ldr r0, _08134C18  @ =0x00044940
	add r1, r5, #0
	bl __divsi3
	neg r0, r0
	strh r0, [r4]
	bl sub_08134D88
	ldr r1, _08134C1C  @ =0x04000006
_08134BE0:
	ldrb r0, [r1]
	cmp r0, #159
	beq _08134BE0
	ldr r1, _08134C1C  @ =0x04000006
_08134BE8:
	ldrb r0, [r1]
	cmp r0, #159
	bne _08134BE8
	ldr r1, _08134C10  @ =0x04000102
	mov r0, #128
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134BFC:
	.4byte gUnknown_03007FF0
_08134C00:
	.4byte gUnknown_083C27C8
_08134C04:
	.4byte 0x00091D1B
_08134C08:
	.4byte 0x00001388
_08134C0C:
	.4byte 0x00002710
_08134C10:
	.4byte 0x04000102
_08134C14:
	.4byte 0x04000100
_08134C18:
	.4byte 0x00044940
_08134C1C:
	.4byte 0x04000006
	THUMB_FUNC_END sub_08134B7C

