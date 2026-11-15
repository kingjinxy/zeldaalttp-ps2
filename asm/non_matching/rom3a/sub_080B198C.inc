	THUMB_FUNC_START sub_080B198C
sub_080B198C: @ 0x080B198C
	push {r4-r6,lr}
	ldr r3, _080B19C4  @ =gRam
	ldr r1, _080B19C8  @ =0x00001A4C
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r0, r0, #4
	add r0, r0, #48
	mov r2, #2
	neg r2, r2
	add r1, r2, #0
	ldr r2, _080B19CC  @ =gUnknown_0816ECF4
	and r0, r0, r1
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r5, _080B19D0  @ =0x00000956
	add r4, r3, r5
	strh r0, [r4]
	ldr r1, _080B19D4  @ =gUnknown_0816ED04
	lsl r0, r0, #16
	asr r2, r0, #16
	ldrh r5, [r1, #4]
	mov r6, #4
	ldrsh r0, [r1, r6]
	add r6, r1, #0
	cmp r2, r0
	blt _080B19D8
	strh r5, [r4]
	b _080B19E4
_080B19C4:
	.4byte gRam
_080B19C8:
	.4byte 0x00001A4C
_080B19CC:
	.4byte gUnknown_0816ECF4
_080B19D0:
	.4byte 0x00000956
_080B19D4:
	.4byte gUnknown_0816ED04
_080B19D8:
	ldrh r1, [r6, #8]
	mov r5, #8
	ldrsh r0, [r6, r5]
	cmp r2, r0
	bgt _080B19E4
	strh r1, [r4]
_080B19E4:
	ldr r0, _080B1A30  @ =0x00000956
	add r1, r3, r0
	mov r2, #128
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r4, _080B1A34  @ =0x00000BB8
	add r1, r3, r4
	strh r0, [r1]
	ldr r5, _080B1A38  @ =0x00001A4E
	add r0, r3, r5
	ldrh r0, [r0]
	lsr r0, r0, #4
	add r0, r0, #128
	mov r2, #2
	neg r2, r2
	add r1, r2, #0
	and r0, r0, r1
	mov r4, #149
	lsl r4, r4, #4
	add r3, r3, r4
	strh r0, [r3]
	add r2, r0, #0
	ldrh r1, [r6, #6]
	mov r5, #6
	ldrsh r0, [r6, r5]
	cmp r2, r0
	bge _080B1A28
	ldrh r1, [r6, #10]
	mov r4, #10
	ldrsh r0, [r6, r4]
	cmp r2, r0
	bgt _080B1A2A
_080B1A28:
	strh r1, [r3]
_080B1A2A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080B1A30:
	.4byte 0x00000956
_080B1A34:
	.4byte 0x00000BB8
_080B1A38:
	.4byte 0x00001A4E
	THUMB_FUNC_END sub_080B198C

