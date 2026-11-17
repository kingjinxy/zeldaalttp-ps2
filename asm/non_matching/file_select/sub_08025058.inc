	THUMB_FUNC_START sub_08025058
sub_08025058: @ 0x08025058
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	ldrb r0, [r7, #10]
	cmp r0, #1
	bhi _080250CC
	ldr r0, [r7, #84]
	add r1, r7, #0
	bl sub_0803CECC
	sub r5, r0, #3
	mov r0, #31
	and r5, r5, r0
	bl sub_0800099C
	add r4, r0, #0
	mov r0, #3
	and r4, r4, r0
	bl sub_0800099C
	mov r1, #12
	and r1, r1, r0
	ldr r0, _080250D8  @ =gUnknown_0813C144
	add r1, r1, r0
	mov r8, r1
	mov r6, #0
_0802508E:
	mov r1, r8
	add r0, r1, r4
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _080250B6
	mov r1, #128
	add r3, r2, #0
	add r3, r3, #43
	add r0, r5, #0
	orr r0, r0, r1
	strb r0, [r3]
	add r0, r7, #0
	add r1, r2, #0
	bl sub_0803D3D0
_080250B6:
	add r5, r5, #2
	mov r0, #31
	and r5, r5, r0
	add r4, r4, #1
	mov r0, #3
	and r4, r4, r0
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #3
	bls _0802508E
_080250CC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080250D8:
	.4byte gUnknown_0813C144
	THUMB_FUNC_END sub_08025058

