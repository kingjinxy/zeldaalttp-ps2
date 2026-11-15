	THUMB_FUNC_START sub_080AB04C
sub_080AB04C: @ 0x080AB04C
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r2, _080AB0F4  @ =gRam
	ldr r0, _080AB0F8  @ =0x00000B5C
	add r5, r2, r0
	ldrh r1, [r5]
	ldr r0, _080AB0FC  @ =0x0000FF80
	and r0, r0, r1
	cmp r0, #0
	bne _080AB06E
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	ldr r0, _080AB100  @ =0x00000B5D
	add r1, r2, r0
	mov r0, #62
	strb r0, [r1]
_080AB06E:
	ldr r1, _080AB100  @ =0x00000B5D
	add r0, r2, r1
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	ldrb r1, [r5]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080AB110
	mov r4, sp
	ldrb r0, [r5]
	mov r1, #10
	bl __udivsi3
	lsl r0, r0, #1
	strb r0, [r4]
	mov r4, sp
	ldrb r0, [r5]
	mov r1, #10
	bl __umodsi3
	lsl r0, r0, #1
	strb r0, [r4, #1]
	mov r1, #2
	ldr r6, _080AB104  @ =gUnknown_0816E03A
	ldr r4, _080AB108  @ =gUnknown_0200B270
	ldr r5, _080AB10C  @ =gUnknown_0816E024
_080AB0A6:
	lsl r1, r1, #24
	asr r3, r1, #24
	asr r0, r1, #25
	add r0, sp, r0
	ldrb r2, [r0]
	sub r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080AB0C6
	mov r2, #18
	cmp r3, #0
	bne _080AB0C6
	mov r2, #20
_080AB0C6:
	asr r3, r1, #24
	asr r1, r1, #25
	lsl r1, r1, #1
	add r1, r1, r4
	lsr r2, r2, #1
	lsl r2, r2, #1
	add r0, r2, r5
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r3, #0
	add r0, r0, #64
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	add r2, r2, r6
	ldrh r1, [r2]
	strh r1, [r0]
	sub r3, r3, #2
	lsl r3, r3, #24
	lsr r1, r3, #24
	cmp r3, #0
	bge _080AB0A6
	b _080AB130
_080AB0F4:
	.4byte gRam
_080AB0F8:
	.4byte 0x00000B5C
_080AB0FC:
	.4byte 0x0000FF80
_080AB100:
	.4byte 0x00000B5D
_080AB104:
	.4byte gUnknown_0816E03A
_080AB108:
	.4byte gUnknown_0200B270
_080AB10C:
	.4byte gUnknown_0816E024
_080AB110:
	mov r0, #255
	orr r0, r0, r1
	strb r0, [r5]
	ldr r0, _080AB138  @ =gUnknown_0200B270
	mov r1, #127
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	sub r0, r0, #62
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
	sub r0, r0, #62
	strh r1, [r0]
	add r0, r0, #64
	strh r1, [r0]
_080AB130:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080AB138:
	.4byte gUnknown_0200B270
	THUMB_FUNC_END sub_080AB04C

