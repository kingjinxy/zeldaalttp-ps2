	THUMB_FUNC_START sub_08049DA8
sub_08049DA8: @ 0x08049DA8
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #58]
	add r1, r2, #2
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	mov r2, #58
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bge _08049DE0
	b _08049ECE
_08049DE0:
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #58]
	mov r0, #15
	mov r1, #6
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08049E28
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _08049E28
	ldr r0, [r7, #4]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
	mov r0, #196
	bl play_sound
_08049E28:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08049EC8
	add r4, r7, #0
	add r4, r4, #10
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #1
	add r1, r0, #0
	add r0, r1, #1
	add r1, r0, #0
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strh r1, [r0]
_08049E54:
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	cmp r1, #3
	bls _08049E60
	b _08049EC8
_08049E60:
	mov r0, #11
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08049EB2
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r7, #0
	add r1, r1, #10
	ldrb r3, [r1]
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_08049EB2:
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _08049E54
_08049EC8:
	ldr r0, [r7]
	bl DeleteThisEntity
_08049ECE:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08049DA8

	.byte 0x00
	.byte 0x00
