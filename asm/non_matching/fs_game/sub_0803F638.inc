	THUMB_FUNC_START sub_0803F638
sub_0803F638: @ 0x0803F638
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _0803F6A8  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r4, r3, #0
	lsl r2, r4, #1
	add r3, r1, #0
	add r1, r1, #132
	add r2, r1, r2
	ldrb r3, [r2]
	add r1, r3, #0
	lsl r2, r1, #4
	add r1, r2, #0
	mov r2, #8
	orr r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, _0803F6A8  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r3, r1, #0
	add r1, r1, #132
	add r2, r1, r2
	ldrb r3, [r2]
	add r1, r3, #0
	lsl r2, r1, #4
	add r1, r2, #0
	mov r2, #8
	orr r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803F6A8:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0803F638

