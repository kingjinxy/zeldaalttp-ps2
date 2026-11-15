	THUMB_FUNC_START sub_0802C9B8
sub_0802C9B8: @ 0x0802C9B8
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	mov r0, #1
	bl load_gfx_group
	mov r0, #128
	lsl r0, r0, #1
	mov r9, r0
	bl sub_0800BD14
	add r6, r0, #0
	ldr r5, _0802CA58  @ =0x03000030
	ldr r4, _0802CA5C  @ =gUnknown_03006C80
	ldrb r1, [r4, #7]
	lsl r1, r1, #7
	ldr r2, _0802CA60  @ =0x000435A0
	add r1, r1, r2
	ldr r0, [r5]
	add r0, r0, r1
	add r1, r6, #0
	mov r2, #32
	bl CpuFastSet
	ldrb r0, [r4, #4]
	add r0, r0, #1
	mov r1, #10
	bl __divsi3
	add r1, r0, #0
	lsl r1, r1, #6
	ldr r0, _0802CA64  @ =0x00043320
	mov r8, r0
	add r1, r1, r8
	ldr r0, [r5]
	add r0, r0, r1
	add r1, r6, #0
	add r1, r1, #128
	mov r2, #16
	bl CpuFastSet
	ldrb r0, [r4, #4]
	add r0, r0, #1
	mov r1, #10
	bl __modsi3
	lsl r0, r0, #6
	add r0, r0, r8
	ldr r2, [r5]
	add r2, r2, r0
	add r1, r6, #0
	add r1, r1, #192
	add r0, r2, #0
	mov r2, #16
	bl CpuFastSet
	ldr r0, _0802CA68  @ =0x0600CB00
	add r1, r6, #0
	mov r2, r9
	bl 0x080009EC
	bl sub_0802D514
	bl sub_0802D280
	ldr r0, _0802CA6C  @ =gBG0Buffer
	mov r2, #128
	lsl r2, r2, #4
	add r1, r0, r2
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_0802CA58:
	.4byte 0x03000030
_0802CA5C:
	.4byte gUnknown_03006C80
_0802CA60:
	.4byte 0x000435A0
_0802CA64:
	.4byte 0x00043320
_0802CA68:
	.4byte 0x0600CB00
_0802CA6C:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0802C9B8

