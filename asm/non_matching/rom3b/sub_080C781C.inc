	THUMB_FUNC_START sub_080C781C
sub_080C781C: @ 0x080C781C
	push {r4,r5,lr}
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r2, r1, #0
	ldr r4, _080C7868  @ =gRam
	ldr r0, _080C786C  @ =0x00000969
	add r3, r4, r0
	mov r0, #0
	strb r0, [r3]
	ldr r5, _080C7870  @ =0x0000096C
	add r1, r4, r5
	strb r0, [r1]
	cmp r2, #0
	beq _080C783E
	strb r0, [r3]
	mov r0, #16
	strb r0, [r1]
_080C783E:
	ldr r1, _080C7874  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C7880
	ldr r3, _080C7878  @ =0x00000964
	add r0, r4, r3
	mov r5, #0
	ldrsh r0, [r0, r5]
	sub r3, r3, #4
	add r1, r4, r3
	mov r5, #0
	ldrsh r1, [r1, r5]
	bl sub_080928A4
	ldr r2, _080C787C  @ =0x000015E2
	add r1, r4, r2
	b _080C78B8
	.byte 0x00
	.byte 0x00
_080C7868:
	.4byte gRam
_080C786C:
	.4byte 0x00000969
_080C7870:
	.4byte 0x0000096C
_080C7874:
	.4byte 0x000009B2
_080C7878:
	.4byte 0x00000964
_080C787C:
	.4byte 0x000015E2
_080C7880:
	ldr r3, _080C78C8  @ =0x00000964
	add r2, r4, r3
	ldrb r1, [r2]
	ldr r5, _080C78CC  @ =0x00000965
	add r3, r4, r5
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsr r1, r1, #3
	lsl r1, r1, #16
	lsr r0, r1, #16
	strb r0, [r2]
	lsr r1, r1, #24
	strb r1, [r3]
	lsl r0, r0, #3
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	ldr r3, _080C78D0  @ =0x00000961
	add r2, r4, r3
	ldrb r2, [r2]
	lsl r2, r2, #8
	add r1, r1, r2
	bl sub_080691D8
	ldr r5, _080C78D4  @ =0x000015E2
	add r1, r4, r5
_080C78B8:
	strh r0, [r1]
	ldr r0, _080C78D8  @ =gRam
	ldr r1, _080C78D4  @ =0x000015E2
	add r0, r0, r1
	ldrb r0, [r0]
	pop {r4,r5}
	pop {r1}
	bx r1
_080C78C8:
	.4byte 0x00000964
_080C78CC:
	.4byte 0x00000965
_080C78D0:
	.4byte 0x00000961
_080C78D4:
	.4byte 0x000015E2
_080C78D8:
	.4byte gRam
	THUMB_FUNC_END sub_080C781C

