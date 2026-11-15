	THUMB_FUNC_START sub_0809E85C
sub_0809E85C: @ 0x0809E85C
	push {r4,lr}
	mov r3, #1
	ldr r4, _0809E89C  @ =gRam
	ldr r1, _0809E8A0  @ =0x000016CE
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0809E872
	mov r3, #2
_0809E872:
	mov r0, #4
	ldr r1, _0809E8A4  @ =0x00001727
	add r2, r4, r1
	mov r1, #0
	orr r3, r3, r0
	strb r3, [r2]
	ldr r2, _0809E8A8  @ =0x00001705
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #56
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809E8AC  @ =0x000017E1
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08099598
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E89C:
	.4byte gRam
_0809E8A0:
	.4byte 0x000016CE
_0809E8A4:
	.4byte 0x00001727
_0809E8A8:
	.4byte 0x00001705
_0809E8AC:
	.4byte 0x000017E1
	THUMB_FUNC_END sub_0809E85C

