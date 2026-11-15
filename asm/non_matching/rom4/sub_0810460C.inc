	THUMB_FUNC_START sub_0810460C
sub_0810460C: @ 0x0810460C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	beq _08104626
	b _08104742
_08104626:
	add r0, r7, #0
	bl sub_080C35C0
	ldr r4, _08104750  @ =gRam
	ldr r0, _08104754  @ =0x00000ED2
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	sub r0, r0, #16
	strb r0, [r1]
	ldr r1, _08104758  @ =0x000010A2
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #9
	strb r1, [r0]
	ldr r2, _0810475C  @ =0x00000F92
	add r0, r4, r2
	add r0, r7, r0
	mov r1, #4
	strb r1, [r0]
	mov r0, #4
	add r1, r7, #0
	mov r2, #13
	bl sub_080C9AAC
	mov r6, #12
	add r5, r4, #0
	mov r3, #0
	mov r9, r3
	ldr r0, _08104760  @ =0x0000105F
	add r0, r0, r5
	mov r8, r0
_08104666:
	add r4, r6, #1
	ldr r1, _08104764  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r2, _08104768  @ =0x00000FF2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #190
	strb r1, [r0]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	ldr r3, _0810476C  @ =0x000010F2
	add r0, r5, r3
	add r0, r4, r0
	mov r1, r9
	strb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldr r0, _08104770  @ =gUnknown_0817BC6C
	add r0, r6, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _08104774  @ =gUnknown_0817BC79
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	ldr r3, _08104778  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	add r3, r3, #128
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _0810477C  @ =0x00000F02
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #24
	strb r1, [r0]
	add r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _08104780  @ =0x00000964
	add r1, r5, r0
	ldr r0, _08104784  @ =gUnknown_0817BC86
	add r0, r6, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _08104788  @ =gUnknown_0817BC93
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #32
	lsl r1, r1, #16
	lsr r2, r1, #16
	sub r3, r3, #160
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	add r3, r3, #176
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _0810478C  @ =0x00000EF2
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #24
	strb r1, [r0]
	add r3, r3, #48
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _0810475C  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08104790  @ =gUnknown_0817BCA0
	add r0, r6, r0
	ldrb r2, [r0]
	strb r2, [r1]
	ldr r1, _08104794  @ =0x00001172
	add r0, r5, r1
	add r4, r4, r0
	strb r2, [r4]
	bl GetRandomInt
	lsl r1, r6, #3
	add r0, r0, r1
	mov r2, r8
	strb r0, [r2]
	mov r3, #1
	neg r3, r3
	add r8, r8, r3
	sub r6, r6, #1
	cmp r6, #0
	bge _08104666
	add r0, r7, #0
	bl sub_080C3758
_08104742:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08104750:
	.4byte gRam
_08104754:
	.4byte 0x00000ED2
_08104758:
	.4byte 0x000010A2
_0810475C:
	.4byte 0x00000F92
_08104760:
	.4byte 0x0000105F
_08104764:
	.4byte 0x00000FA2
_08104768:
	.4byte 0x00000FF2
_0810476C:
	.4byte 0x000010F2
_08104770:
	.4byte gUnknown_0817BC6C
_08104774:
	.4byte gUnknown_0817BC79
_08104778:
	.4byte 0x00000EE2
_0810477C:
	.4byte 0x00000F02
_08104780:
	.4byte 0x00000964
_08104784:
	.4byte gUnknown_0817BC86
_08104788:
	.4byte gUnknown_0817BC93
_0810478C:
	.4byte 0x00000EF2
_08104790:
	.4byte gUnknown_0817BCA0
_08104794:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0810460C

