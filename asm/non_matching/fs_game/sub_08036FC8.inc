	THUMB_FUNC_START sub_08036FC8
sub_08036FC8: @ 0x08036FC8
	push {r4-r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r0, r7, #2
	mov r2, #192
	lsl r2, r2, #8
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #2
	ldr r1, _08036FF4  @ =gUnknown_0200B1D0
	ldr r2, _08036FF8  @ =0x01000040
	bl CpuSet
	add r0, r7, #0
	mov r1, #14
	strb r1, [r0]
_08036FE8:
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #15
	bls _08036FFC
	b _08037078
	.byte 0x00
	.byte 0x00
_08036FF4:
	.4byte gUnknown_0200B1D0
_08036FF8:
	.4byte 0x01000040
_08036FFC:
	ldr r0, _08037074  @ =gUnknown_0200B1D0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldr r1, _08037074  @ =gUnknown_0200B1D0
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r1, #0
	add r2, r2, #32
	add r1, r2, r3
	ldr r2, _08037074  @ =gUnknown_0200B1D0
	add r3, r7, #0
	ldrb r4, [r3]
	add r5, r4, #0
	lsl r3, r5, #1
	add r4, r2, #0
	add r5, r2, #0
	add r5, r5, #64
	add r2, r5, r3
	ldr r3, _08037074  @ =gUnknown_0200B1D0
	add r4, r7, #0
	ldrb r5, [r4]
	add r6, r5, #0
	lsl r4, r6, #1
	add r5, r3, #0
	add r6, r3, #0
	add r6, r6, #96
	add r3, r6, r4
	ldrh r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3]
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2]
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08036FE8
_08037074:
	.4byte gUnknown_0200B1D0
_08037078:
	add r0, r7, #4
	mov r1, #0
	strh r1, [r0]
	add r0, r7, #4
	ldr r1, _080370B0  @ =gUnknown_03000FE4
	ldr r2, _080370B4  @ =0x0100000A
	bl CpuSet
	ldr r0, _080370B8  @ =gUnknown_03000494
	mov r1, #0
	str r1, [r0]
	ldr r1, _080370BC  @ =gUnknown_03000FC0
	ldr r0, _080370BC  @ =gUnknown_03000FC0
	ldr r1, _080370BC  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
_080370B0:
	.4byte gUnknown_03000FE4
_080370B4:
	.4byte 0x0100000A
_080370B8:
	.4byte gUnknown_03000494
_080370BC:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036FC8

