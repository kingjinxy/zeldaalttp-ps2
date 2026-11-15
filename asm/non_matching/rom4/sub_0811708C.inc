	THUMB_FUNC_START sub_0811708C
sub_0811708C: @ 0x0811708C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _081170A8  @ =gRam
	ldr r2, _081170AC  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	beq _081170B0
	add r0, r4, #0
	bl sub_0811730C
	b _08117162
_081170A8:
	.4byte gRam
_081170AC:
	.4byte 0x000009AD
_081170B0:
	ldr r1, _08117168  @ =0x00001844
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	mov r6, #255
	and r0, r0, r6
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081170F8
	ldr r2, _0811716C  @ =0x00000E29
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	and r0, r0, r6
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _081170F4
	ldr r1, _08117170  @ =0x00000E1F
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldrb r1, [r2]
	mov r0, #7
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
_081170F4:
	mov r0, #3
	strb r0, [r3]
_081170F8:
	ldr r2, _08117170  @ =0x00000E1F
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811715C
	add r0, r4, #0
	bl sub_080C10D4
	add r0, r4, #0
	bl sub_080BF774
	add r0, r4, #0
	bl sub_080C1768
	add r0, r4, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	cmp r0, #0
	bne _08117132
	add r0, r4, #0
	mov r1, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811715C
_08117132:
	ldr r1, _08117174  @ =0x00000E15
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #17
	strb r1, [r0]
	ldr r1, _08117178  @ =0x00000E5B
	add r0, r5, r1
	add r0, r4, r0
	ldr r1, _0811717C  @ =gUnknown_08226484
	ldrb r1, [r1, #16]
	strb r1, [r0]
	ldr r1, _0811716C  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _08117168  @ =0x00001844
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
_0811715C:
	add r0, r4, #0
	bl sub_0811730C
_08117162:
	pop {r4-r6}
	pop {r0}
	bx r0
_08117168:
	.4byte 0x00001844
_0811716C:
	.4byte 0x00000E29
_08117170:
	.4byte 0x00000E1F
_08117174:
	.4byte 0x00000E15
_08117178:
	.4byte 0x00000E5B
_0811717C:
	.4byte gUnknown_08226484
	THUMB_FUNC_END sub_0811708C

