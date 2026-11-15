	THUMB_FUNC_START sub_080EC8CC
sub_080EC8CC: @ 0x080EC8CC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r7, _080EC96C  @ =gRam
	ldr r1, _080EC970  @ =0x00000F92
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080EC974  @ =gUnknown_08178440
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #3
	bl sub_080C9480
	ldr r2, _080EC978  @ =0x000010D2
	add r0, r7, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EC962
	ldr r1, _080EC97C  @ =0x00001082
	add r0, r7, r1
	add r0, r4, r0
	ldrb r5, [r0]
	ldr r0, _080EC980  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #3
	mov r2, #170
	lsl r2, r2, #3
	add r1, r7, r2
	add r6, r0, r1
	ldr r1, _080EC984  @ =0x00000FD2
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EC928
	add r0, r5, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
_080EC928:
	ldrh r3, [r6, #4]
	lsl r0, r3, #22
	lsr r0, r0, #22
	mov r2, #128
	lsl r2, r2, #1
	and r2, r2, r0
	ldr r0, _080EC988  @ =gUnknown_08178500
	add r0, r5, r0
	ldrb r1, [r0]
	orr r1, r1, r2
	ldr r0, _080EC98C  @ =0xFFFFFC00
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r6, #4]
	ldr r0, _080EC990  @ =gUnknown_08178508
	add r0, r5, r0
	ldrb r1, [r0]
	lsr r1, r1, #6
	mov r0, #1
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r2, [r6, #3]
	sub r0, r0, #18
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r6, #3]
	mov r0, r8
	bl sub_080C6230
_080EC962:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080EC96C:
	.4byte gRam
_080EC970:
	.4byte 0x00000F92
_080EC974:
	.4byte gUnknown_08178440
_080EC978:
	.4byte 0x000010D2
_080EC97C:
	.4byte 0x00001082
_080EC980:
	.4byte gUnknown_03003E74
_080EC984:
	.4byte 0x00000FD2
_080EC988:
	.4byte gUnknown_08178500
_080EC98C:
	.4byte 0xFFFFFC00
_080EC990:
	.4byte gUnknown_08178508
	THUMB_FUNC_END sub_080EC8CC

