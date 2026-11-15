	THUMB_FUNC_START sub_080C2774
sub_080C2774: @ 0x080C2774
	push {r4,lr}
	ldr r3, _080C2810  @ =gRam
	ldr r1, _080C2814  @ =0x000016D5
	add r0, r3, r1
	ldrb r4, [r0]
	lsr r4, r4, #1
	ldr r2, _080C2818  @ =0x000016C4
	add r0, r3, r2
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080C281C  @ =gUnknown_08171E39
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _080C2820  @ =gUnknown_08171E43
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r2, r2, #16
	add r0, r3, r2
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080C2824  @ =0x000016C1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r0, _080C2828  @ =gUnknown_08171E3D
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _080C282C  @ =gUnknown_08171E41
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080C2830  @ =0x00000961
	add r0, r3, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r2, r2, #16
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _080C2834  @ =gUnknown_08171E47
	add r0, r4, r0
	ldrb r1, [r0]
	sub r2, r2, #13
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _080C2838  @ =gUnknown_08171E49
	add r4, r4, r0
	ldrb r0, [r4]
	ldr r1, _080C283C  @ =0x00000965
	add r3, r3, r1
	strb r0, [r3]
	bl sub_080C2840
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2810:
	.4byte gRam
_080C2814:
	.4byte 0x000016D5
_080C2818:
	.4byte 0x000016C4
_080C281C:
	.4byte gUnknown_08171E39
_080C2820:
	.4byte gUnknown_08171E43
_080C2824:
	.4byte 0x000016C1
_080C2828:
	.4byte gUnknown_08171E3D
_080C282C:
	.4byte gUnknown_08171E41
_080C2830:
	.4byte 0x00000961
_080C2834:
	.4byte gUnknown_08171E47
_080C2838:
	.4byte gUnknown_08171E49
_080C283C:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080C2774

