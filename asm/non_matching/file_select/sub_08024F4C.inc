	THUMB_FUNC_START sub_08024F4C
sub_08024F4C: @ 0x08024F4C
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #84]
	add r1, r4, #0
	bl sub_0803CECC
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	ldrb r0, [r5]
	add r0, r0, #2
	asr r1, r0, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _08024F7C
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl sub_08003870
_08024F7C:
	add r0, r4, #0
	bl sub_0803CC20
	ldrb r0, [r5]
	add r0, r0, #8
	mov r1, #31
	and r0, r0, r1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_0803CC20
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024F4C

