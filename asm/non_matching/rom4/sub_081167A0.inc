	THUMB_FUNC_START sub_081167A0
sub_081167A0: @ 0x081167A0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	bne _08116828
	ldr r2, _08116830  @ =gRam
	mov r1, sp
	ldr r3, _08116834  @ =0x00000E1F
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	mov r3, #1
	strb r3, [r0]
	ldr r5, _08116838  @ =0x0000176D
	add r0, r2, r5
	strb r3, [r0]
	ldr r0, _0811683C  @ =0x00001705
	add r3, r2, r0
	ldrb r0, [r3]
	orr r1, r1, r0
	strb r1, [r3]
	ldr r1, _08116840  @ =0x00001727
	add r0, r2, r1
	strb r4, [r0]
	ldr r3, _08116844  @ =0x000016CC
	add r0, r2, r3
	strb r4, [r0]
	mov r1, sp
	ldr r5, _08116848  @ =0x00000E29
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	ldr r3, _0811684C  @ =0x00001844
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r2, r5
	ldrh r0, [r0]
	add r0, r0, #4
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	add r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	ldr r1, _08116850  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_08116828:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_08116830:
	.4byte gRam
_08116834:
	.4byte 0x00000E1F
_08116838:
	.4byte 0x0000176D
_0811683C:
	.4byte 0x00001705
_08116840:
	.4byte 0x00001727
_08116844:
	.4byte 0x000016CC
_08116848:
	.4byte 0x00000E29
_0811684C:
	.4byte 0x00001844
_08116850:
	.4byte 0x00000964
	THUMB_FUNC_END sub_081167A0

