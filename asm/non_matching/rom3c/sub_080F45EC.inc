	THUMB_FUNC_START sub_080F45EC
sub_080F45EC: @ 0x080F45EC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r0, _080F46DC  @ =gUnknown_0200EE18
	ldrb r1, [r0]
	ldr r5, _080F46E0  @ =gUnknown_0200EE19
	ldrb r4, [r5]
	lsl r4, r4, #8
	add r4, r1, r4
	ldr r3, _080F46E4  @ =gUnknown_0200EE1A
	ldrb r0, [r3]
	lsl r0, r0, #16
	add r4, r4, r0
	ldr r2, _080F46E8  @ =gUnknown_0200EE1B
	ldrb r0, [r2]
	lsl r0, r0, #24
	add r4, r4, r0
	ldr r0, _080F46EC  @ =gUnknown_0200EE1C
	strb r1, [r0]
	ldr r1, _080F46F0  @ =gUnknown_0200EE1D
	ldrb r0, [r5]
	strb r0, [r1]
	add r1, r1, #1
	ldrb r0, [r3]
	strb r0, [r1]
	add r1, r1, #1
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r5, _080F46F4  @ =0x00001770
	add r0, r4, #0
	add r1, r5, #0
	bl __udivsi3
	add r6, r0, #0
	add r0, r6, #0
	mul r0, r5, r0
	sub r4, r4, r0
	mov r1, #150
	lsl r1, r1, #2
	add r0, r4, #0
	bl __udivsi3
	add r7, r0, #0
	lsl r1, r7, #2
	add r1, r1, r7
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #3
	sub r4, r4, r0
	add r0, r4, #0
	mov r1, #60
	bl __udivsi3
	add r5, r0, #0
	lsl r0, r5, #4
	sub r0, r0, r5
	lsl r0, r0, #2
	sub r4, r4, r0
	add r0, r4, #0
	mov r1, #10
	bl __udivsi3
	add r1, r0, #0
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #1
	sub r4, r4, r0
	cmp r6, #0
	beq _080F4686
	mov r7, #9
	mov r5, #9
	mov r1, #5
	mov r4, #9
_080F4686:
	ldr r6, _080F46F8  @ =gRam
	lsl r0, r1, #4
	orr r0, r0, r4
	ldr r2, _080F46FC  @ =0x00001AEC
	add r1, r6, r2
	strb r0, [r1]
	lsl r0, r7, #4
	orr r0, r0, r5
	add r2, r2, #1
	add r1, r6, r2
	strb r0, [r1]
	mov r0, r8
	mov r1, #206
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F46D0
	ldr r1, _080F4700  @ =0x00000FB2
	add r0, r6, r1
	add r0, r0, r8
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r2, _080F4704  @ =0x00001082
	add r0, r6, r2
	add r0, r0, r8
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F4708  @ =0x00000F52
	add r1, r6, r0
	add r1, r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F46D0:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F46DC:
	.4byte gUnknown_0200EE18
_080F46E0:
	.4byte gUnknown_0200EE19
_080F46E4:
	.4byte gUnknown_0200EE1A
_080F46E8:
	.4byte gUnknown_0200EE1B
_080F46EC:
	.4byte gUnknown_0200EE1C
_080F46F0:
	.4byte gUnknown_0200EE1D
_080F46F4:
	.4byte 0x00001770
_080F46F8:
	.4byte gRam
_080F46FC:
	.4byte 0x00001AEC
_080F4700:
	.4byte 0x00000FB2
_080F4704:
	.4byte 0x00001082
_080F4708:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F45EC

