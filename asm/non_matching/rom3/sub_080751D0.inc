	THUMB_FUNC_START sub_080751D0
sub_080751D0: @ 0x080751D0
	push {r4,r5,lr}
	ldr r4, _080751E4  @ =gRam
	ldr r0, _080751E8  @ =0x00001AE2
	add r5, r4, r0
	ldrb r1, [r5]
	cmp r1, #0
	beq _080751EC
	cmp r1, #1
	beq _0807520C
	b _0807523A
_080751E4:
	.4byte gRam
_080751E8:
	.4byte 0x00001AE2
_080751EC:
	ldr r2, _08075204  @ =0x000009E8
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
	ldr r1, _08075208  @ =0x00001AEE
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r5]
	b _0807523A
_08075204:
	.4byte 0x000009E8
_08075208:
	.4byte 0x00001AEE
_0807520C:
	mov r0, #73
	mov r1, #0
	bl sub_0812A324
	ldr r2, _08075240  @ =0x000009AC
	add r1, r4, r2
	mov r0, #14
	strb r0, [r1]
	ldr r0, _08075244  @ =0x000009AD
	add r1, r4, r0
	mov r0, #11
	strb r0, [r1]
	add r2, r2, #60
	add r1, r4, r2
	mov r2, #0
	mov r0, #6
	strh r0, [r1]
	ldr r1, _08075248  @ =0x000009EC
	add r0, r4, r1
	strb r2, [r0]
	sub r1, r1, #79
	add r0, r4, r1
	strb r2, [r0]
_0807523A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08075240:
	.4byte 0x000009AC
_08075244:
	.4byte 0x000009AD
_08075248:
	.4byte 0x000009EC
	THUMB_FUNC_END sub_080751D0

