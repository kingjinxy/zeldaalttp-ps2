	THUMB_FUNC_START sub_08017344
sub_08017344: @ 0x08017344
	push {r4-r7,lr}
	add r5, r0, #0
	bl GetNextFrame
	add r2, r5, #0
	add r2, r2, #41
	ldrb r1, [r2]
	add r0, r1, #0
	cmp r0, #1
	bne _08017380
	ldr r0, [r5, #88]
	cmp r0, #0
	bne _08017406
	ldrb r2, [r5, #23]
	add r0, r5, #0
	add r1, r2, #0
	bl sub_08009E6C
	str r0, [r5, #88]
	ldrb r0, [r5, #24]
	add r0, r0, #1
	strb r0, [r5, #24]
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08017406
	ldrb r0, [r5, #23]
	add r0, r0, #32
	strb r0, [r5, #23]
	b _08017406
_08017380:
	cmp r0, #2
	bne _080173D4
	mov r0, #0
	strb r0, [r2]
	bl sub_08012494
	add r6, r0, #0
	cmp r6, #0
	beq _080173CE
	bl sub_0800099C
	mov r7, #31
	and r0, r0, r7
	add r4, r6, #0
	add r4, r4, #43
	strb r0, [r4]
	ldr r1, [r5, #88]
	cmp r1, #0
	beq _080173AE
	add r0, r5, #0
	bl sub_0803CECC
	b _080173B4
_080173AE:
	bl sub_0800099C
	and r0, r0, r7
_080173B4:
	strb r0, [r4]
	ldrb r0, [r5, #9]
	cmp r0, #5
	beq _080173C0
	mov r0, #1
	strb r0, [r6, #10]
_080173C0:
	add r0, r5, #0
	add r1, r6, #0
	bl sub_0803D3D0
	mov r0, #12
	bl sub_08003DFC
_080173CE:
	mov r0, #0
	str r0, [r5, #88]
	b _08017406
_080173D4:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08017406
	mov r4, #0
	mov r0, #1
	strb r0, [r5, #20]
	strb r0, [r5, #23]
	bl sub_0800099C
	mov r1, #127
	and r0, r0, r1
	add r0, r0, #64
	strb r0, [r5, #24]
	add r0, r5, #0
	add r0, r0, #42
	strb r4, [r0]
	add r1, r5, #0
	add r1, r1, #63
	mov r0, #9
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
_08017406:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017344

