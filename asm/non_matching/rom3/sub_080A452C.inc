	THUMB_FUNC_START sub_080A452C
sub_080A452C: @ 0x080A452C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsr r0, r0, #18
	lsl r0, r0, #3
	ldr r2, _080A45E8  @ =gUnknown_03002780
	add r6, r0, r2
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #31
	mov r9, r0
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r3, r0, #30
	mov r0, #192
	lsl r0, r0, #6
	and r0, r0, r1
	lsr r7, r0, #12
	ldr r0, _080A45EC  @ =0x000001FF
	mov r12, r0
	and r0, r0, r1
	mov r12, r0
	mov r0, #224
	lsl r0, r0, #4
	and r0, r0, r1
	lsr r0, r0, #9
	mov r8, r0
	ldr r1, _080A45F0  @ =0x00000484
	add r2, r2, r1
	ldrb r0, [r2]
	cmp r0, #179
	bne _080A4588
	mov r0, #4
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	bne _080A4588
	add r7, r7, #1
_080A4588:
	mov r2, #13
	neg r2, r2
	mov r0, #17
	neg r0, r0
	mov r4, #33
	neg r4, r4
	mov r5, #63
	mov r1, #0
	strb r1, [r6, #1]
	lsl r3, r3, #4
	ldrb r1, [r6, #3]
	and r0, r0, r1
	orr r0, r0, r3
	mov r3, r9
	lsl r1, r3, #5
	and r0, r0, r4
	orr r0, r0, r1
	and r0, r0, r5
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r6, #3]
	ldrh r1, [r6, #4]
	ldr r0, _080A45F4  @ =0xFFFFFC00
	and r0, r0, r1
	mov r1, r12
	orr r0, r0, r1
	strh r0, [r6, #4]
	ldr r0, _080A45F8  @ =gUnknown_0816B38E
	add r0, r7, r0
	mov r1, #3
	ldrb r0, [r0]
	and r0, r0, r1
	lsl r0, r0, #2
	ldrb r1, [r6, #5]
	and r2, r2, r1
	orr r2, r2, r0
	mov r3, r8
	lsl r1, r3, #4
	mov r0, #15
	and r2, r2, r0
	orr r2, r2, r1
	strb r2, [r6, #5]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080A45E8:
	.4byte gUnknown_03002780
_080A45EC:
	.4byte 0x000001FF
_080A45F0:
	.4byte 0x00000484
_080A45F4:
	.4byte 0xFFFFFC00
_080A45F8:
	.4byte gUnknown_0816B38E
	THUMB_FUNC_END sub_080A452C

