	THUMB_FUNC_START sub_080752D0
sub_080752D0: @ 0x080752D0
	push {r4,r5,lr}
	ldr r5, _08075320  @ =gRam
	ldr r0, _08075324  @ =0x000009EC
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080752E6
	mov r0, #118
	mov r1, #0
	bl sub_0812A324
_080752E6:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #40
	bls _08075318
	bl sub_080BE220
	mov r0, #0
	bl sub_08129EAC
	ldr r0, _08075328  @ =0x0000018B
	bl sub_080AF4FC
	bl sub_08129684
	ldr r0, _0807532C  @ =0x000009AD
	add r1, r5, r0
	mov r0, #11
	strb r0, [r1]
	ldr r0, _08075330  @ =0x000009E8
	add r1, r5, r0
	mov r0, #2
	strh r0, [r1]
_08075318:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075320:
	.4byte gRam
_08075324:
	.4byte 0x000009EC
_08075328:
	.4byte 0x0000018B
_0807532C:
	.4byte 0x000009AD
_08075330:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080752D0

