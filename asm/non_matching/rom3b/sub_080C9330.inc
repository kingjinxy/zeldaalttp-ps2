	THUMB_FUNC_START sub_080C9330
sub_080C9330: @ 0x080C9330
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _080C93D4  @ =gRam
	ldr r3, _080C93D8  @ =0x000011D2
	add r2, r4, r3
	add r2, r1, r2
	mov r3, #18
	strb r3, [r2]
	ldr r5, _080C93DC  @ =0x000015F8
	add r2, r4, r5
	strb r3, [r2]
	ldr r3, _080C93E0  @ =0x00000EE2
	add r2, r4, r3
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r5, _080C93E4  @ =0x00000F02
	add r2, r4, r5
	add r2, r0, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r3, r3, r2
	mov r5, #150
	lsl r5, r5, #4
	add r2, r4, r5
	lsl r3, r3, #16
	asr r3, r3, #16
	ldrh r2, [r2]
	add r3, r3, r2
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r5, _080C93E8  @ =0x0000122C
	add r2, r4, r5
	add r2, r1, r2
	strb r3, [r2]
	add r5, r5, #60
	add r2, r4, r5
	add r2, r1, r2
	lsr r3, r3, #8
	strb r3, [r2]
	ldr r3, _080C93EC  @ =0x00000ED2
	add r2, r4, r3
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r5, _080C93F0  @ =0x00000EF2
	add r2, r4, r5
	add r2, r0, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r3, r3, r2
	ldr r5, _080C93F4  @ =0x00000964
	add r2, r4, r5
	lsl r3, r3, #16
	asr r3, r3, #16
	ldrh r2, [r2]
	add r3, r3, r2
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r5, _080C93F8  @ =0x0000120E
	add r2, r4, r5
	add r2, r1, r2
	strb r3, [r2]
	add r5, r5, #60
	add r2, r4, r5
	add r2, r1, r2
	lsr r3, r3, #8
	strb r3, [r2]
	ldr r3, _080C93FC  @ =0x0000131C
	add r2, r4, r3
	add r2, r1, r2
	strb r0, [r2]
	add r5, r5, #180
	add r4, r4, r5
	add r1, r1, r4
	mov r0, #15
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C93D4:
	.4byte gRam
_080C93D8:
	.4byte 0x000011D2
_080C93DC:
	.4byte 0x000015F8
_080C93E0:
	.4byte 0x00000EE2
_080C93E4:
	.4byte 0x00000F02
_080C93E8:
	.4byte 0x0000122C
_080C93EC:
	.4byte 0x00000ED2
_080C93F0:
	.4byte 0x00000EF2
_080C93F4:
	.4byte 0x00000964
_080C93F8:
	.4byte 0x0000120E
_080C93FC:
	.4byte 0x0000131C
	THUMB_FUNC_END sub_080C9330

