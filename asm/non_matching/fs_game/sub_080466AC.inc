	THUMB_FUNC_START sub_080466AC
sub_080466AC: @ 0x080466AC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	ldr r2, _08046734  @ =0xFFFFFE09
	add r0, r1, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #2
	bhi _08046738
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	ldr r3, _08046734  @ =0xFFFFFE09
	add r0, r1, r3
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #2
	bhi _08046738
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	b _08046790
_08046734:
	.4byte 0xFFFFFE09
_08046738:
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	mov r2, #252
	lsl r2, r2, #1
	mov r3, #252
	lsl r3, r3, #1
	bl 0x08003F54
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, _08046798  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08046784
	ldr r0, [r7]
	mov r1, #1
	mov r2, #1
	mov r3, #20
	bl sub_0804CB7C
_08046784:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl sub_080660BC
_08046790:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08046798:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_080466AC

