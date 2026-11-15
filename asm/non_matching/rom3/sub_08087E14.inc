	THUMB_FUNC_START sub_08087E14
sub_08087E14: @ 0x08087E14
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r2, _08087EAC  @ =gRam
	ldr r0, _08087EB0  @ =0x00000974
	add r4, r2, r0
	mov r1, #0
	mov r0, #4
	strh r0, [r4]
	ldr r0, _08087EB4  @ =0x0000096C
	add r3, r2, r0
	strh r1, [r3]
	mov r1, #151
	lsl r1, r1, #4
	add r6, r2, r1
	ldrh r1, [r6]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #57
	ble _08087E48
	mov r0, #1
	strh r0, [r3]
	mov r0, #5
	strh r0, [r4]
_08087E48:
	ldr r0, _08087EB8  @ =gUnknown_02000400
	ldrh r5, [r0]
	mov r9, r2
	add r7, r6, #0
	mov r2, #246
	lsl r2, r2, #1
	add r6, r2, #0
	mov r8, r3
	add r3, r4, #0
	lsl r0, r5, #1
	ldr r1, _08087EBC  @ =gUnknown_02000402
	add r4, r0, r1
_08087E60:
	mov r2, #0
	ldrsh r0, [r7, r2]
	str r3, [sp]
	bl sub_08080380
	ldr r2, _08087EC0  @ =0x00001FFF
	add r1, r2, #0
	and r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r9
	strh r0, [r1]
	lsl r1, r5, #1
	mov r12, r1
	ldr r2, _08087EC4  @ =0xFFFFE000
	add r1, r2, #0
	add r0, r0, r1
	strh r0, [r4]
	strh r6, [r4, #4]
	strh r6, [r4, #6]
	strh r6, [r4, #8]
	strh r6, [r4, #10]
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	ldr r3, [sp]
	cmp r0, #0
	bne _08087EC8
	mov r0, #5
	strh r0, [r4, #2]
	strh r6, [r4, #12]
	ldrh r0, [r7]
	add r0, r0, #128
	strh r0, [r7]
	add r4, r4, #14
	add r5, r5, #7
	b _08087EDC
	.byte 0x00
	.byte 0x00
_08087EAC:
	.4byte gRam
_08087EB0:
	.4byte 0x00000974
_08087EB4:
	.4byte 0x0000096C
_08087EB8:
	.4byte gUnknown_02000400
_08087EBC:
	.4byte gUnknown_02000402
_08087EC0:
	.4byte 0x00001FFF
_08087EC4:
	.4byte 0xFFFFE000
_08087EC8:
	ldr r1, _08087F08  @ =gUnknown_02000404
	add r1, r1, r12
	ldr r2, _08087F0C  @ =0x00008004
	add r0, r2, #0
	strh r0, [r1]
	ldrh r0, [r7]
	add r0, r0, #2
	strh r0, [r7]
	add r4, r4, #12
	add r5, r5, #6
_08087EDC:
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08087E60
	lsl r0, r5, #1
	ldr r1, _08087F10  @ =gUnknown_02000402
	add r0, r0, r1
	ldr r2, _08087F14  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08087F18  @ =gUnknown_02000400
	strh r5, [r0]
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08087F08:
	.4byte gUnknown_02000404
_08087F0C:
	.4byte 0x00008004
_08087F10:
	.4byte gUnknown_02000402
_08087F14:
	.4byte 0x0000FFFF
_08087F18:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08087E14

