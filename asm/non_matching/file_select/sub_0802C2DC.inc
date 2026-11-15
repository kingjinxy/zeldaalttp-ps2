	THUMB_FUNC_START sub_0802C2DC
sub_0802C2DC: @ 0x0802C2DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r3, _0802C304  @ =gUnknown_0202E110
	mov r5, #0
	add r4, r3, #0
	add r1, r3, #0
	add r1, r1, #64
_0802C2F0:
	ldrb r0, [r3, #1]
	cmp r0, r6
	bne _0802C308
	ldrb r2, [r3, #2]
	add r0, r3, #0
	add r1, r6, #0
	bl sub_0802C2B8
	add r0, r5, #0
	b _0802C392
_0802C304:
	.4byte gUnknown_0202E110
_0802C308:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r3, r3, #4
	ldr r2, _0802C374  @ =gUnknown_0202E150
	cmp r3, r1
	bcc _0802C2F0
	add r3, r4, #0
	mov r5, #0
	ldr r0, _0802C378  @ =gUnknown_08146DBC
	lsl r1, r6, #2
	add r1, r1, r0
	ldrb r4, [r1, #3]
	mov r0, #15
	and r4, r4, r0
	ldr r0, _0802C37C  @ =0x03000030
	mov r8, r0
	add r7, r1, #0
_0802C32C:
	ldrb r0, [r3]
	cmp r0, #0
	bne _0802C384
	mov r1, #0
	cmp r1, r4
	bcs _0802C34C
_0802C338:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, r4
	bcs _0802C34C
	lsl r0, r1, #2
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802C338
_0802C34C:
	cmp r1, r4
	bne _0802C384
	add r0, r3, #0
	add r1, r6, #0
	add r2, r4, #0
	bl sub_0802C2B8
	ldr r1, [r7]
	ldr r0, _0802C380  @ =0x00FFFFFF
	and r1, r1, r0
	mov r2, r8
	ldr r0, [r2]
	add r0, r0, r1
	add r1, r5, #0
	add r1, r1, #16
	add r2, r4, #0
	bl load_palette
	add r0, r5, #0
	b _0802C392
_0802C374:
	.4byte gUnknown_0202E150
_0802C378:
	.4byte gUnknown_08146DBC
_0802C37C:
	.4byte 0x03000030
_0802C380:
	.4byte 0x00FFFFFF
_0802C384:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r3, r3, #4
	cmp r3, r2
	bcc _0802C32C
	mov r0, #0
_0802C392:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0802C2DC

