	THUMB_FUNC_START sub_08011E9C
sub_08011E9C: @ 0x08011E9C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08011EC8
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r1, [r4, #11]
	mov r0, #176
	mul r0, r1, r0
	add r0, r0, #32
	strh r0, [r4, #50]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_08011EC8:
	ldr r0, _08011EE4  @ =gGameLanguage
	ldrb r1, [r0]
	sub r1, r1, #1
	lsl r0, r1, #3
	sub r0, r0, r1
	lsl r0, r0, #2
	sub r0, r0, #2
	strh r0, [r4, #54]
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
_08011EE4:
	.4byte gGameLanguage
	THUMB_FUNC_END sub_08011E9C

