	THUMB_FUNC_START sub_0807545C
sub_0807545C: @ 0x0807545C
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r4, _080754E0  @ =gRam
	ldr r1, _080754E4  @ =0x00000C6A
	add r0, r4, r1
	mov r2, #0
	strh r2, [r0]
	ldr r6, _080754E8  @ =0x00000C76
	add r5, r4, r6
	add r1, r1, #10
	add r0, r4, r1
	strh r2, [r0]
	add r6, r6, #2
	add r3, r4, r6
	add r1, r1, #6
	add r0, r4, r1
	strh r2, [r0]
	add r6, r6, #6
	add r0, r4, r6
	mov r1, #8
	strh r1, [r0]
	add r6, r6, #2
	add r0, r4, r6
	strh r1, [r0]
	ldr r0, _080754EC  @ =0x00000C7C
	add r1, r4, r0
	mov r0, #21
	strh r0, [r1]
	sub r6, r6, #16
	add r1, r4, r6
	ldr r0, _080754F0  @ =0x0000FFC0
	strh r0, [r1]
	ldr r0, _080754F4  @ =0x00000C72
	add r1, r4, r0
	mov r0, #64
	strh r0, [r1]
	sub r6, r6, #4
	add r1, r4, r6
	mov r0, #254
	lsl r0, r0, #8
	strh r0, [r1]
	ldr r0, _080754F8  @ =0x00000C6E
	add r1, r4, r0
	mov r0, #128
	lsl r0, r0, #2
	strh r0, [r1]
	strh r2, [r5]
	strh r2, [r3]
	mov r0, #2
	bl sub_0806BD6C
	mov r1, sp
	ldr r6, _080754FC  @ =0x00000952
	add r4, r4, r6
	ldrh r0, [r4]
	strh r0, [r1]
	ldr r1, _08075500  @ =gUnknown_02001600
	ldr r2, _08075504  @ =0x01000100
	mov r0, sp
	bl CpuSet
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080754E0:
	.4byte gRam
_080754E4:
	.4byte 0x00000C6A
_080754E8:
	.4byte 0x00000C76
_080754EC:
	.4byte 0x00000C7C
_080754F0:
	.4byte 0x0000FFC0
_080754F4:
	.4byte 0x00000C72
_080754F8:
	.4byte 0x00000C6E
_080754FC:
	.4byte 0x00000952
_08075500:
	.4byte gUnknown_02001600
_08075504:
	.4byte 0x01000100
	THUMB_FUNC_END sub_0807545C

