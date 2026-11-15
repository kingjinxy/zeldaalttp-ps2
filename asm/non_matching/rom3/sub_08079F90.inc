	THUMB_FUNC_START sub_08079F90
sub_08079F90: @ 0x08079F90
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r0, _0807A050  @ =gRam
	ldr r2, _0807A054  @ =0x00001770
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	bne _0807A074
	ldr r3, _0807A058  @ =0x00001702
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0807A074
	bl sub_08079884
	add r2, r0, #0
	ldr r3, _0807A05C  @ =gUnknown_0200CBA0
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	bne _08079FC6
	ldr r6, _0807A060  @ =gUnknown_0200CBA1
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #35
	beq _0807A010
_08079FC6:
	add r2, r2, #64
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	bne _08079FDA
	ldr r1, _0807A060  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #35
	beq _0807A010
_08079FDA:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r6, #0
	ldrsh r2, [r1, r6]
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	bne _08079FFC
	ldr r1, _0807A060  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #35
	beq _0807A010
_08079FFC:
	add r2, r2, #64
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	bne _0807A074
	ldr r3, _0807A060  @ =gUnknown_0200CBA1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #35
	bne _0807A074
_0807A010:
	ldr r6, _0807A064  @ =gUnknown_0200CBE0
	add r0, r2, r6
	ldr r3, _0807A05C  @ =gUnknown_0200CBA0
	add r1, r2, r3
	ldrb r3, [r1]
	ldrb r0, [r0]
	ldr r5, _0807A050  @ =gRam
	cmp r0, r3
	bne _0807A074
	add r6, r6, #1
	add r0, r2, r6
	sub r6, r6, #64
	add r1, r2, r6
	ldrb r0, [r0]
	ldrb r6, [r1]
	cmp r0, r6
	bne _0807A074
	ldr r6, _0807A068  @ =0x00000978
	add r0, r5, r6
	strb r3, [r0]
	ldrb r1, [r1]
	ldr r3, _0807A06C  @ =0x00000979
	add r0, r5, r3
	strb r1, [r0]
	ldr r6, _0807A070  @ =0x00000B5E
	add r0, r5, r6
	strh r2, [r0]
	mov r0, #0
	str r0, [r4]
	mov r0, #1
	b _0807A07C
	.byte 0x00
	.byte 0x00
_0807A050:
	.4byte gRam
_0807A054:
	.4byte 0x00001770
_0807A058:
	.4byte 0x00001702
_0807A05C:
	.4byte gUnknown_0200CBA0
_0807A060:
	.4byte gUnknown_0200CBA1
_0807A064:
	.4byte gUnknown_0200CBE0
_0807A068:
	.4byte 0x00000978
_0807A06C:
	.4byte 0x00000979
_0807A070:
	.4byte 0x00000B5E
_0807A074:
	ldr r0, _0807A084  @ =0x00000B5E
	add r1, r5, r0
	mov r0, #0
	strh r0, [r1]
_0807A07C:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0807A084:
	.4byte 0x00000B5E
	THUMB_FUNC_END sub_08079F90

