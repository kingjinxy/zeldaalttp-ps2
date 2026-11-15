	THUMB_FUNC_START sub_080D3E68
sub_080D3E68: @ 0x080D3E68
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	sub sp, sp, #4
	mov r8, r0
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080D3F54  @ =0x00002710
	add r0, r4, #0
	add r1, r5, #0
	bl __divsi3
	mul r0, r5, r0
	sub r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080D3F58  @ =gRam
	mov r1, #250
	lsl r1, r1, #2
	add r0, r4, #0
	bl __divsi3
	mov r9, r0
	ldr r1, _080D3F5C  @ =0x0000096C
	add r0, r5, r1
	mov r2, r9
	strh r2, [r0]
	mov r3, #0
	ldrsh r1, [r0, r3]
	lsl r0, r1, #5
	sub r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r1
	lsl r0, r0, #3
	sub r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #100
	mov r10, r0
	add r0, r4, #0
	mov r1, #100
	bl __udivsi3
	add r6, r0, #0
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r1, _080D3F60  @ =0x00000968
	add r0, r5, r1
	strh r6, [r0]
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r3, r10
	mul r3, r0, r3
	add r0, r3, #0
	sub r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #10
	bl __udivsi3
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D3F64  @ =0x00000964
	add r1, r5, r2
	strh r0, [r1]
	mov r3, #0
	ldrsh r2, [r1, r3]
	lsl r1, r2, #2
	add r1, r1, r2
	lsl r1, r1, #1
	sub r4, r4, r1
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	strh r4, [r1]
	lsl r4, r4, #4
	orr r4, r4, r0
	ldr r3, _080D3F68  @ =0x00001AEC
	add r0, r5, r3
	strb r4, [r0]
	mov r0, r9
	lsl r0, r0, #4
	orr r0, r0, r6
	mov r9, r0
	ldr r1, _080D3F6C  @ =0x00001AED
	add r0, r5, r1
	mov r2, r9
	strb r2, [r0]
	mov r0, r8
	mov r1, #247
	mov r2, sp
	bl sub_080C9564
	ldr r3, _080D3F70  @ =0x00000F52
	add r5, r5, r3
	add r8, r8, r5
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3F54:
	.4byte 0x00002710
_080D3F58:
	.4byte gRam
_080D3F5C:
	.4byte 0x0000096C
_080D3F60:
	.4byte 0x00000968
_080D3F64:
	.4byte 0x00000964
_080D3F68:
	.4byte 0x00001AEC
_080D3F6C:
	.4byte 0x00001AED
_080D3F70:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3E68

