	THUMB_FUNC_START sub_08022B10
sub_08022B10: @ 0x08022B10
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r7, r0, #0
	ldr r0, [r7, #124]
	cmp r0, #0
	beq _08022BA2
	add r2, r7, #0
	add r2, r2, #116
	ldrb r0, [r2]
	add r1, r2, #0
	cmp r0, #4
	bls _08022B32
	mov r0, #4
	strb r0, [r1]
_08022B32:
	mov r5, #0
	ldr r3, _08022BB0  @ =gUnknown_0813BD6C
	ldrb r0, [r2]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r3
	ldrb r0, [r1]
	cmp r0, #255
	beq _08022BA2
	mov r8, r3
	add r6, r2, #0
	ldr r0, _08022BB4  @ =0x0000FFF0
	mov r9, r0
_08022B4E:
	ldrb r0, [r6]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #1
	add r1, r5, r1
	add r1, r1, r8
	ldrb r1, [r1]
	add r0, r7, #0
	bl sub_0804CABC
	add r4, r0, #0
	cmp r4, #0
	beq _08022B8A
	ldrh r0, [r4, #50]
	sub r0, r0, #8
	strh r0, [r4, #50]
	mov r0, r9
	strh r0, [r4, #58]
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	add r0, r0, #20
	mov r1, #128
	orr r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #1
	strb r0, [r4, #11]
_08022B8A:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r1, [r6]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r5, r0
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #255
	bne _08022B4E
_08022BA2:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08022BB0:
	.4byte gUnknown_0813BD6C
_08022BB4:
	.4byte 0x0000FFF0
	THUMB_FUNC_END sub_08022B10

