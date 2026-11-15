	THUMB_FUNC_START sub_08070064
sub_08070064: @ 0x08070064
	push {r4,lr}
	ldr r2, _080700D8  @ =gRam
	ldr r1, _080700DC  @ =0x000009E1
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r1, r1, #2
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #128
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	orr r1, r1, r0
	add r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080700E0  @ =0x00000AAE
	add r3, r2, r0
	ldr r0, _080700E4  @ =gUnknown_0814CDFC
	add r1, r1, r0
	ldrb r4, [r1]
	ldrh r0, [r3]
	orr r4, r4, r0
	strh r4, [r3]
	ldr r1, _080700E8  @ =0x00000AA8
	add r0, r2, r1
	ldrh r3, [r0]
	lsr r3, r3, #4
	ldr r1, _080700EC  @ =0x0000096C
	add r0, r2, r1
	strh r3, [r0]
	add r1, r1, #110
	add r0, r2, r1
	ldrh r1, [r0]
	lsl r1, r1, #1
	ldr r0, _080700F0  @ =gUnknown_02002000
	add r1, r1, r0
	ldr r0, _080700F4  @ =0x00000AA6
	add r2, r2, r0
	ldrh r2, [r2]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r2
	orr r4, r4, r0
	orr r3, r3, r4
	strh r3, [r1]
	pop {r4}
	pop {r0}
	bx r0
_080700D8:
	.4byte gRam
_080700DC:
	.4byte 0x000009E1
_080700E0:
	.4byte 0x00000AAE
_080700E4:
	.4byte gUnknown_0814CDFC
_080700E8:
	.4byte 0x00000AA8
_080700EC:
	.4byte 0x0000096C
_080700F0:
	.4byte gUnknown_02002000
_080700F4:
	.4byte 0x00000AA6
	THUMB_FUNC_END sub_08070064

