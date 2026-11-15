	THUMB_FUNC_START sub_08031884
sub_08031884: @ 0x08031884
	push {r4-r7,lr}
	ldr r0, _0803193C  @ =gUnknown_084279CC
	mov r1, #0
	bl sub_080311A0
	add r4, r0, #0
	mov r5, #0
	ldr r0, _08031940  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcs _08031926
	mov r7, #0
	mov r6, #63
_0803189E:
	add r0, r5, #0
	bl sub_08063C5C
	add r2, r0, #0
	ldrh r0, [r4]
	strh r0, [r2, #50]
	add r4, r4, #2
	mov r0, #180
	lsl r0, r0, #1
	strh r0, [r2, #54]
	ldrb r1, [r2, #28]
	mov r3, #4
	neg r3, r3
	add r0, r3, #0
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r2, #28]
	add r0, r2, #0
	add r0, r0, #42
	strb r7, [r0]
	ldrb r1, [r2, #31]
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2, #31]
	ldrb r1, [r2, #29]
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #29]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r2, r2, #94
	ldrb r1, [r2]
	sub r3, r3, #9
	add r0, r3, #0
	and r1, r1, r0
	mov r0, #4
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _08031944  @ =gUnknown_03006A30
	lsl r0, r5, #3
	add r0, r0, r5
	lsl r0, r0, #4
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0, #12]
	ldrh r2, [r4]
	add r1, r0, #0
	add r1, r1, #56
	strb r2, [r1]
	ldrh r1, [r4]
	lsr r1, r1, #8
	add r0, r0, #57
	strb r1, [r0]
	add r4, r4, #2
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _08031940  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcc _0803189E
_08031926:
	mov r0, #13
	mov r1, #11
	mov r2, #0
	bl sub_0804C8A8
	ldr r1, _08031948  @ =gUnknown_03000450
	str r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803193C:
	.4byte gUnknown_084279CC
_08031940:
	.4byte gUnknown_03006C80
_08031944:
	.4byte gUnknown_03006A30
_08031948:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08031884

