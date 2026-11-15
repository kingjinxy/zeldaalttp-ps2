	THUMB_FUNC_START sub_0809E228
sub_0809E228: @ 0x0809E228
	push {r4,lr}
	ldr r3, _0809E274  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #151
	bgt _0809E288
	ldr r4, _0809E278  @ =0x000016D4
	add r0, r3, r4
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809E27C  @ =0x00001727
	add r0, r3, r2
	strb r1, [r0]
	sub r4, r4, #8
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, _0809E280  @ =0x000016EB
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0809E2B2
	add r2, r2, #56
	add r1, r3, r2
	mov r0, #2
	strb r0, [r1]
	ldr r4, _0809E284  @ =0x000009E8
	add r1, r3, r4
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _0809E2B2
	.byte 0x00
	.byte 0x00
_0809E274:
	.4byte gRam
_0809E278:
	.4byte 0x000016D4
_0809E27C:
	.4byte 0x00001727
_0809E280:
	.4byte 0x000016EB
_0809E284:
	.4byte 0x000009E8
_0809E288:
	cmp r0, #168
	bgt _0809E294
	ldr r0, _0809E2B8  @ =0x00001719
	add r1, r3, r0
	mov r0, #20
	strb r0, [r1]
_0809E294:
	ldr r1, _0809E2BC  @ =0x00001727
	add r0, r3, r1
	mov r2, #0
	mov r1, #8
	strb r1, [r0]
	ldr r4, _0809E2C0  @ =0x000016CC
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _0809E2C4  @ =0x000016D5
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _0809E2C8  @ =0x000016EB
	add r1, r3, r2
	mov r0, #64
	strb r0, [r1]
_0809E2B2:
	pop {r4}
	pop {r0}
	bx r0
_0809E2B8:
	.4byte 0x00001719
_0809E2BC:
	.4byte 0x00001727
_0809E2C0:
	.4byte 0x000016CC
_0809E2C4:
	.4byte 0x000016D5
_0809E2C8:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0809E228

