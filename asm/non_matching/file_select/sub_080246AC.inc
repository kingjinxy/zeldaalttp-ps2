	THUMB_FUNC_START sub_080246AC
sub_080246AC: @ 0x080246AC
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #112]
	bl 0x08003828
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08024722
	add r1, r4, #0
	add r1, r1, #124
	mov r0, #16
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08024D48
	add r0, r4, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080246F0
	mov r0, #19
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	b _08024722
_080246F0:
	mov r0, #14
	strb r0, [r4, #20]
	mov r0, #150
	strb r0, [r4, #23]
	add r0, r0, #106
	str r0, [r4, #12]
	ldr r0, [r4, #84]
	add r1, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r1]
	add r1, r1, #2
	asr r1, r1, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl 0x08003870
_08024722:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080246AC

