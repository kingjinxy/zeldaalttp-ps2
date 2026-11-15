	THUMB_FUNC_START sub_080C97A8
sub_080C97A8: @ 0x080C97A8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080C985C  @ =gRam
	ldr r3, _080C9860  @ =0x000011D2
	add r2, r4, r3
	add r2, r1, r2
	mov r3, #5
	strb r3, [r2]
	ldr r5, _080C9864  @ =0x000015F8
	add r2, r4, r5
	strb r3, [r2]
	ldr r6, _080C9868  @ =0x00000EE2
	add r2, r4, r6
	add r2, r0, r2
	ldrb r5, [r2]
	ldr r3, _080C986C  @ =0x00000F02
	add r2, r4, r3
	add r2, r0, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	mov r6, #150
	lsl r6, r6, #4
	add r3, r4, r6
	orr r5, r5, r2
	ldrh r3, [r3]
	add r5, r5, r3
	ldr r3, _080C9870  @ =0x00000ED2
	add r2, r4, r3
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r6, _080C9874  @ =0x00000EF2
	add r2, r4, r6
	add r2, r0, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	orr r3, r3, r2
	ldr r6, _080C9878  @ =0x00001142
	add r2, r4, r6
	add r2, r0, r2
	ldrb r2, [r2]
	sub r3, r3, r2
	lsl r3, r3, #16
	mov r2, #128
	lsl r2, r2, #13
	add r3, r3, r2
	ldr r6, _080C987C  @ =0x00000964
	add r2, r4, r6
	lsr r3, r3, #16
	ldrh r2, [r2]
	add r3, r3, r2
	ldr r6, _080C9880  @ =0x0000122C
	add r2, r4, r6
	add r2, r1, r2
	strb r5, [r2]
	add r6, r6, #60
	add r2, r4, r6
	add r2, r1, r2
	lsr r5, r5, #8
	strb r5, [r2]
	ldr r5, _080C9884  @ =0x0000120E
	add r2, r4, r5
	add r2, r1, r2
	strb r3, [r2]
	sub r6, r6, #30
	add r2, r4, r6
	add r2, r1, r2
	lsr r3, r3, #8
	strb r3, [r2]
	ldr r3, _080C9888  @ =0x000012FE
	add r2, r4, r3
	add r2, r1, r2
	mov r3, #31
	strb r3, [r2]
	ldr r5, _080C988C  @ =0x0000131C
	add r2, r4, r5
	add r2, r1, r2
	strb r0, [r2]
	ldr r6, _080C9890  @ =0x00001358
	add r2, r4, r6
	add r1, r1, r2
	ldr r2, _080C9894  @ =0x000010F2
	add r4, r4, r2
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C985C:
	.4byte gRam
_080C9860:
	.4byte 0x000011D2
_080C9864:
	.4byte 0x000015F8
_080C9868:
	.4byte 0x00000EE2
_080C986C:
	.4byte 0x00000F02
_080C9870:
	.4byte 0x00000ED2
_080C9874:
	.4byte 0x00000EF2
_080C9878:
	.4byte 0x00001142
_080C987C:
	.4byte 0x00000964
_080C9880:
	.4byte 0x0000122C
_080C9884:
	.4byte 0x0000120E
_080C9888:
	.4byte 0x000012FE
_080C988C:
	.4byte 0x0000131C
_080C9890:
	.4byte 0x00001358
_080C9894:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080C97A8

