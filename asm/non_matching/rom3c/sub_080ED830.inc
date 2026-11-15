	THUMB_FUNC_START sub_080ED830
sub_080ED830: @ 0x080ED830
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080ED888  @ =gRam
	ldr r3, _080ED88C  @ =0x00000AA8
	add r0, r2, r3
	mov r7, #0
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	bge _080ED850
	ldr r3, _080ED890  @ =0x000009AC
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #26
	bne _080ED8A0
_080ED850:
	mov r1, #15
	ldr r6, _080ED894  @ =gUnknown_08227796
	ldr r0, _080ED898  @ =0x00000FF2
	add r5, r2, r0
	ldr r3, _080ED89C  @ =0x00000FA2
	add r4, r2, r3
	mov r3, #16
_080ED85E:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r0, r2, r5
	ldrb r0, [r0]
	add r0, r0, r6
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080ED87A
	add r0, r2, r4
	strb r1, [r0]
_080ED87A:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ED85E
	b _080ED8AC
	.byte 0x00
	.byte 0x00
_080ED888:
	.4byte gRam
_080ED88C:
	.4byte 0x00000AA8
_080ED890:
	.4byte 0x000009AC
_080ED894:
	.4byte gUnknown_08227796
_080ED898:
	.4byte 0x00000FF2
_080ED89C:
	.4byte 0x00000FA2
_080ED8A0:
	mov r7, #1
	ldr r3, _080ED8B4  @ =0x00000FA2
	add r0, r2, r3
	add r0, r1, r0
	mov r1, #0
	strb r1, [r0]
_080ED8AC:
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_080ED8B4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080ED830

