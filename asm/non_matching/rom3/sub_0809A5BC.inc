	THUMB_FUNC_START sub_0809A5BC
sub_0809A5BC: @ 0x0809A5BC
	push {r4,lr}
	ldr r0, _0809A600  @ =gRam
	ldr r2, _0809A604  @ =0x00001702
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #1
	beq _0809A634
	ldr r4, _0809A608  @ =0x00001804
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809A618
	ldr r1, _0809A60C  @ =0x0000160C
	add r0, r3, r1
	ldrh r1, [r0]
	sub r2, r2, #66
	add r0, r3, r2
	mov r2, #0
	strh r1, [r0]
	ldr r4, _0809A610  @ =0x00001608
	add r0, r3, r4
	ldrh r1, [r0]
	add r4, r4, #188
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _0809A614  @ =0x000016D0
	add r0, r3, r1
	strb r2, [r0]
	add r4, r4, #13
	add r0, r3, r4
	strb r2, [r0]
	mov r0, #1
	b _0809A65E
_0809A600:
	.4byte gRam
_0809A604:
	.4byte 0x00001702
_0809A608:
	.4byte 0x00001804
_0809A60C:
	.4byte 0x0000160C
_0809A610:
	.4byte 0x00001608
_0809A614:
	.4byte 0x000016D0
_0809A618:
	ldr r0, _0809A630  @ =0x00001807
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809A634
	mov r0, #19
	strb r0, [r1]
	mov r0, #1
	b _0809A65E
_0809A630:
	.4byte 0x00001807
_0809A634:
	ldr r1, _0809A664  @ =0x0000160C
	add r0, r3, r1
	ldrh r1, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r3, r2
	mov r2, #0
	strh r1, [r0]
	ldr r4, _0809A668  @ =0x00001608
	add r0, r3, r4
	ldrh r1, [r0]
	add r4, r4, #188
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _0809A66C  @ =0x000016D0
	add r0, r3, r1
	strb r2, [r0]
	add r4, r4, #13
	add r0, r3, r4
	strb r2, [r0]
	mov r0, #0
_0809A65E:
	pop {r4}
	pop {r1}
	bx r1
_0809A664:
	.4byte 0x0000160C
_0809A668:
	.4byte 0x00001608
_0809A66C:
	.4byte 0x000016D0
	THUMB_FUNC_END sub_0809A5BC

