	THUMB_FUNC_START sub_0810890C
sub_0810890C: @ 0x0810890C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _081089BC  @ =gRam
	ldr r0, _081089C0  @ =0x00000EE2
	add r0, r0, r4
	mov r8, r0
	add r8, r8, r1
	mov r5, r8
	ldrb r5, [r5]
	str r5, [sp, #4]
	ldr r0, _081089C4  @ =0x00000F02
	add r3, r4, r0
	add r3, r1, r3
	ldrb r5, [r3]
	mov r9, r5
	sub r0, r0, #48
	add r2, r4, r0
	add r2, r1, r2
	ldrb r7, [r2]
	ldr r5, _081089C8  @ =0x00000EF2
	add r6, r4, r5
	add r6, r1, r6
	ldrb r0, [r6]
	mov r10, r0
	ldr r5, _081089CC  @ =0x00001622
	add r0, r4, r5
	ldrb r0, [r0]
	mov r5, #0
	mov r12, r5
	mov r5, r8
	strb r0, [r5]
	ldr r5, _081089D0  @ =0x00001623
	add r0, r4, r5
	ldrb r0, [r0]
	strb r0, [r3]
	add r5, r5, #1
	add r0, r4, r5
	ldrb r0, [r0]
	strb r0, [r2]
	add r5, r5, #1
	add r0, r4, r5
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r0, _081089D4  @ =0x00000E75
	add r5, r4, r0
	add r5, r1, r5
	mov r0, #128
	strb r0, [r5]
	ldr r0, _081089D8  @ =0x00001032
	add r4, r4, r0
	add r4, r1, r4
	mov r0, r12
	strb r0, [r4]
	mov r0, sp
	str r2, [sp, #8]
	str r3, [sp, #12]
	bl sub_080C4948
	mov r0, #132
	strb r0, [r5]
	mov r0, #64
	strb r0, [r4]
	mov r1, r10
	strb r1, [r6]
	ldr r2, [sp, #8]
	strb r7, [r2]
	ldr r3, [sp, #12]
	mov r5, r9
	strb r5, [r3]
	mov r0, sp
	ldrb r1, [r0, #4]
	mov r0, r8
	strb r1, [r0]
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_081089BC:
	.4byte gRam
_081089C0:
	.4byte 0x00000EE2
_081089C4:
	.4byte 0x00000F02
_081089C8:
	.4byte 0x00000EF2
_081089CC:
	.4byte 0x00001622
_081089D0:
	.4byte 0x00001623
_081089D4:
	.4byte 0x00000E75
_081089D8:
	.4byte 0x00001032
	THUMB_FUNC_END sub_0810890C

