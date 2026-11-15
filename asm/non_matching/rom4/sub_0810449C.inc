	THUMB_FUNC_START sub_0810449C
sub_0810449C: @ 0x0810449C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #29
	ldr r1, _08104580  @ =gRam
	ldr r3, _08104584  @ =0x000011EF
	add r0, r1, r3
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #0
	beq _081044CE
	ldr r5, _08104588  @ =0x000011D2
	add r1, r3, r5
_081044B6:
	lsl r0, r2, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r2, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _081044D4
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _081044B6
_081044CE:
	lsl r0, r2, #24
	cmp r0, #0
	bge _081044EC
_081044D4:
	ldr r5, _0810458C  @ =0x00001642
	add r2, r3, r5
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081044EA
	mov r0, #29
	strb r0, [r2]
_081044EA:
	ldrb r2, [r2]
_081044EC:
	lsl r2, r2, #24
	asr r2, r2, #24
	ldr r1, _08104588  @ =0x000011D2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
	ldr r5, _08104590  @ =0x000015F8
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _08104594  @ =0x0000122C
	add r1, r3, r0
	add r1, r2, r1
	ldr r5, _08104598  @ =0x00000EE2
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810459C  @ =0x00001268
	add r1, r3, r0
	add r1, r2, r1
	add r5, r5, #32
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _081045A0  @ =0x00000ED2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r5, r5, #16
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r5, _081045A4  @ =0x0000120E
	add r0, r3, r5
	add r0, r2, r0
	strb r1, [r0]
	add r5, r5, #60
	add r0, r3, r5
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _081045A8  @ =0x000012FE
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	ldr r5, _081045AC  @ =0x000013EE
	add r1, r3, r5
	add r1, r2, r1
	ldr r5, _081045B0  @ =0x00000F92
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _081045B4  @ =0x0000131C
	add r0, r3, r1
	add r0, r2, r0
	strb r4, [r0]
	ldr r5, _081045B8  @ =0x00001358
	add r0, r3, r5
	add r2, r2, r0
	ldr r1, _081045BC  @ =0x000010F2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_08104580:
	.4byte gRam
_08104584:
	.4byte 0x000011EF
_08104588:
	.4byte 0x000011D2
_0810458C:
	.4byte 0x00001642
_08104590:
	.4byte 0x000015F8
_08104594:
	.4byte 0x0000122C
_08104598:
	.4byte 0x00000EE2
_0810459C:
	.4byte 0x00001268
_081045A0:
	.4byte 0x00000ED2
_081045A4:
	.4byte 0x0000120E
_081045A8:
	.4byte 0x000012FE
_081045AC:
	.4byte 0x000013EE
_081045B0:
	.4byte 0x00000F92
_081045B4:
	.4byte 0x0000131C
_081045B8:
	.4byte 0x00001358
_081045BC:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_0810449C

