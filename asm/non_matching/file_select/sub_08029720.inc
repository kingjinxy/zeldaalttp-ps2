	THUMB_FUNC_START sub_08029720
sub_08029720: @ 0x08029720
	push {r4,lr}
	add r4, r0, #0
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _08029756
	ldr r1, _080297F4  @ =gUnknown_0813D0FC
	ldrb r0, [r4, #23]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldrh r0, [r4, #50]
	sub r0, r0, r1
	strh r0, [r2, #50]
	ldrh r0, [r4, #54]
	sub r0, r0, #20
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
_08029756:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _08029788
	ldr r0, _080297F4  @ =gUnknown_0813D0FC
	ldrb r1, [r4, #23]
	lsr r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r4, #50]
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r2, #50]
	ldrh r0, [r4, #54]
	sub r0, r0, #20
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
_08029788:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _080297BA
	ldr r1, _080297F4  @ =gUnknown_0813D0FC
	ldrb r0, [r4, #23]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldrh r0, [r4, #50]
	sub r0, r0, r1
	strh r0, [r2, #50]
	ldrh r0, [r4, #54]
	add r0, r0, #20
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
_080297BA:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _080297EC
	ldr r0, _080297F4  @ =gUnknown_0813D0FC
	ldrb r1, [r4, #23]
	lsr r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r4, #50]
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r2, #50]
	ldrh r0, [r4, #54]
	add r0, r0, #20
	strh r0, [r2, #54]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
_080297EC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080297F4:
	.4byte gUnknown_0813D0FC
	THUMB_FUNC_END sub_08029720

