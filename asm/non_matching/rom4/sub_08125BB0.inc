	THUMB_FUNC_START sub_08125BB0
sub_08125BB0: @ 0x08125BB0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r6, _08125C50  @ =gRam
	ldr r1, _08125C54  @ =0x00001BCA
	add r0, r6, r1
	ldrh r2, [r0]
	lsr r2, r2, #8
	mov r1, #7
	add r7, r2, #0
	and r7, r7, r1
	ldr r3, _08125C58  @ =0x00001BD4
	add r0, r6, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	add r5, r0, #0
	and r5, r5, r1
	mov r1, #56
	add r4, r1, #0
	and r4, r4, r2
	and r1, r1, r0
	mov r8, r6
	cmp r4, r1
	beq _08125C70
	cmp r1, r4
	bcc _08125CA4
	sub r0, r1, r4
	asr r0, r0, #3
	ldr r2, _08125C5C  @ =0x00001BDA
	add r2, r2, r6
	mov r12, r2
	strh r0, [r2]
	sub r3, r3, #20
	add r0, r6, r3
	lsl r1, r1, #2
	ldr r0, [r0]
	add r4, r0, r1
	ldr r0, _08125C60  @ =0x00001BB8
	add r3, r6, r0
	ldr r1, _08125C64  @ =gUnknown_08180688
	lsl r0, r5, #2
	add r0, r0, r1
	ldr r2, [r0]
	str r2, [r3]
	ldr r1, _08125C68  @ =0x00001BBC
	add r3, r6, r1
	ldr r0, [r3]
	ldr r1, [r4]
	eor r0, r0, r1
	and r0, r0, r2
	eor r0, r0, r1
	str r0, [r4]
	sub r4, r4, #32
	mov r2, r12
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r5, _08125C6C  @ =gUnknown_08180668
	lsl r2, r7, #2
	cmp r0, #0
	beq _08125C40
	mov r1, r12
_08125C2E:
	ldr r0, [r3]
	str r0, [r4]
	sub r4, r4, #32
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08125C2E
_08125C40:
	ldr r1, _08125C60  @ =0x00001BB8
	add r1, r1, r8
	add r0, r2, r5
	ldr r2, [r0]
	str r2, [r1]
	ldr r0, _08125C68  @ =0x00001BBC
	add r0, r0, r8
	b _08125C98
_08125C50:
	.4byte gRam
_08125C54:
	.4byte 0x00001BCA
_08125C58:
	.4byte 0x00001BD4
_08125C5C:
	.4byte 0x00001BDA
_08125C60:
	.4byte 0x00001BB8
_08125C64:
	.4byte gUnknown_08180688
_08125C68:
	.4byte 0x00001BBC
_08125C6C:
	.4byte gUnknown_08180668
_08125C70:
	ldr r0, _08125CB0  @ =0x00001BB8
	add r3, r6, r0
	ldr r0, _08125CB4  @ =gUnknown_08180688
	lsl r1, r5, #2
	add r1, r1, r0
	ldr r2, _08125CB8  @ =gUnknown_08180668
	lsl r0, r7, #2
	add r0, r0, r2
	ldr r2, [r1]
	ldr r0, [r0]
	and r2, r2, r0
	str r2, [r3]
	mov r1, #222
	lsl r1, r1, #5
	add r0, r6, r1
	lsl r1, r4, #2
	ldr r0, [r0]
	add r4, r0, r1
	ldr r3, _08125CBC  @ =0x00001BBC
	add r0, r6, r3
_08125C98:
	ldr r0, [r0]
	ldr r1, [r4]
	eor r0, r0, r1
	and r0, r0, r2
	eor r0, r0, r1
	str r0, [r4]
_08125CA4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125CB0:
	.4byte 0x00001BB8
_08125CB4:
	.4byte gUnknown_08180688
_08125CB8:
	.4byte gUnknown_08180668
_08125CBC:
	.4byte 0x00001BBC
	THUMB_FUNC_END sub_08125BB0

