	THUMB_FUNC_START sub_08075334
sub_08075334: @ 0x08075334
	push {r4,r5,lr}
	ldr r4, _08075384  @ =gRam
	ldr r0, _08075388  @ =0x000009EC
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0807534A
	bl sub_08069F08
_0807534A:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r1, _0807538C  @ =0x0000099D
	add r0, r4, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	cmp r2, #0
	bne _0807537E
	ldr r0, _08075390  @ =0x000009AC
	add r1, r4, r0
	mov r0, #23
	strb r0, [r1]
	ldr r0, _08075394  @ =0x000009AD
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08075398  @ =0x00001A4A
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _0807539C  @ =0x000009E8
	add r0, r4, r1
	strh r2, [r0]
_0807537E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08075384:
	.4byte gRam
_08075388:
	.4byte 0x000009EC
_0807538C:
	.4byte 0x0000099D
_08075390:
	.4byte 0x000009AC
_08075394:
	.4byte 0x000009AD
_08075398:
	.4byte 0x00001A4A
_0807539C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075334

