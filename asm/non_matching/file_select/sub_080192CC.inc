	THUMB_FUNC_START sub_080192CC
sub_080192CC: @ 0x080192CC
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_08003BCC
	ldr r0, [r4, #120]
	bl DeleteThisEntity
	ldr r0, [r4, #124]
	bl DeleteThisEntity
	ldr r6, _0801933C  @ =gUnknown_08139994
	bl sub_0800099C
	mov r5, #7
	and r0, r0, r5
	add r0, r0, r6
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0801930A
	add r2, r1, #0
	add r2, r2, #43
	mov r0, #136
	strb r0, [r2]
	add r0, r4, #0
	bl sub_0803D3D0
_0801930A:
	bl sub_0800099C
	and r0, r0, r5
	add r0, r0, r6
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08019330
	add r2, r1, #0
	add r2, r2, #43
	mov r0, #152
	strb r0, [r2]
	add r0, r4, #0
	bl sub_0803D3D0
_08019330:
	add r0, r4, #0
	bl sub_08043F20
	pop {r4-r6}
	pop {r0}
	bx r0
_0801933C:
	.4byte gUnknown_08139994
	THUMB_FUNC_END sub_080192CC

