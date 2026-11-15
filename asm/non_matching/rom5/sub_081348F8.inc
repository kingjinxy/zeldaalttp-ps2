	THUMB_FUNC_START sub_081348F8
sub_081348F8: @ 0x081348F8
	push {r4-r7,lr}
	ldrb r5, [r0, #8]
	ldr r4, [r0, #44]
	cmp r5, #0
	ble _0813493A
	mov r7, #128
_08134904:
	ldrb r1, [r4]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08134932
	mov r6, #64
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08134932
	add r0, r4, #0
	bl sub_08134A70
	strb r7, [r4]
	mov r0, #2
	strb r0, [r4, #15]
	strb r6, [r4, #19]
	mov r0, #22
	strb r0, [r4, #25]
	add r1, r4, #0
	add r1, r1, #36
	mov r0, #1
	strb r0, [r1]
_08134932:
	sub r5, r5, #1
	add r4, r4, #80
	cmp r5, #0
	bgt _08134904
_0813493A:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081348F8

