	THUMB_FUNC_START sub_0802173C
sub_0802173C: @ 0x0802173C
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	cmp r1, #0
	bne _08021750
	b _08021858
_08021750:
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0802175E
	mov r0, #168
	bl play_sound
_0802175E:
	add r0, r4, #0
	bl sub_0803CC20
	ldr r1, _080217CC  @ =0xFFFFFE08
	add r0, r1, #0
	ldrh r2, [r4, #50]
	add r1, r0, r2
	ldrh r2, [r4, #54]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r1, r1, #16
	mov r0, #192
	lsl r0, r0, #10
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #6
	bhi _08021790
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r4, #50]
	ldrb r1, [r4, #24]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r4, #24]
_08021790:
	lsl r0, r2, #16
	mov r1, #192
	lsl r1, r1, #10
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #6
	bhi _080217AC
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r4, #54]
	ldrb r1, [r4, #24]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r4, #24]
_080217AC:
	ldrb r0, [r4, #24]
	cmp r0, #3
	bne _08021830
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080217D0
	sub r0, r0, #1
	mov r1, #0
	strb r0, [r4, #23]
	add r2, r4, #0
	add r2, r2, #43
	mov r0, #255
	strb r0, [r2]
	str r1, [r4, #16]
	b _08021858
	.byte 0x00
	.byte 0x00
_080217CC:
	.4byte 0xFFFFFE08
_080217D0:
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _08021858
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _080217F6
	mov r0, #97
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	b _08021808
_080217F6:
	mov r0, #1
	strb r0, [r4, #10]
	add r0, r4, #0
	bl sub_08022AEC
	mov r0, #206
	lsl r0, r0, #1
	bl play_sound
_08021808:
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r2, #128
	lsl r2, r2, #20
	add r1, r1, r2
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	add r0, r4, #0
	bl sub_080229CC
	mov r0, #16
	mov r1, #3
	bl sub_080161F8
	b _08021858
_08021830:
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	mov r3, #252
	lsl r3, r3, #1
	add r2, r3, #0
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r0, [r4, #16]
	cmp r0, #0
	beq _08021858
	mov r1, #128
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
_08021858:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802173C

	.byte 0x00
	.byte 0x00
