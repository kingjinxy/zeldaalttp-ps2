	THUMB_FUNC_START sub_08127334
sub_08127334: @ 0x08127334
	push {r4,r5,lr}
	ldr r2, _08127368  @ =gRam
	ldr r0, _0812736C  @ =0x00001AC8
	add r1, r2, r0
	ldr r0, _08127370  @ =gUnknown_0818098C
	ldm r0!, {r3-r5}
	stm r1!, {r3-r5}
	ldm r0!, {r3-r5}
	stm r1!, {r3-r5}
	ldm r0!, {r3,r4}
	stm r1!, {r3,r4}
	ldr r5, _08127374  @ =0x00001B04
	add r1, r2, r5
	mov r0, #0
	strb r0, [r1]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #6]
	add r5, r2, #0
	cmp r1, #1
	beq _0812738C
	cmp r1, #1
	bgt _08127378
	cmp r1, #0
	beq _0812737E
	b _0812739E
_08127368:
	.4byte gRam
_0812736C:
	.4byte 0x00001AC8
_08127370:
	.4byte gUnknown_0818098C
_08127374:
	.4byte 0x00001B04
_08127378:
	cmp r1, #2
	beq _08127398
	b _0812739E
_0812737E:
	ldr r0, _08127388  @ =0x00001ACD
	add r1, r5, r0
	mov r0, #4
	strb r0, [r1]
	b _0812739E
_08127388:
	.4byte 0x00001ACD
_0812738C:
	ldr r2, _08127394  @ =0x00001ACD
	add r0, r5, r2
	b _0812739C
	.byte 0x00
	.byte 0x00
_08127394:
	.4byte 0x00001ACD
_08127398:
	ldr r3, _081273EC  @ =0x00001AE4
	add r0, r5, r3
_0812739C:
	strb r1, [r0]
_0812739E:
	ldr r4, _081273F0  @ =0x00001ACD
	add r0, r5, r4
	ldrb r1, [r0]
	ldr r2, _081273F4  @ =0x00001ACE
	add r0, r5, r2
	mov r4, #0
	strb r1, [r0]
	ldr r3, _081273F8  @ =0x00001B05
	add r0, r5, r3
	strb r1, [r0]
	add r2, r2, #56
	add r0, r5, r2
	strb r1, [r0]
	bl sub_0812976C
	bl sub_08129C58
	ldr r3, _081273FC  @ =0x00001ADC
	add r1, r5, r3
	mov r0, #140
	lsl r0, r0, #5
	strh r0, [r1]
	bl sub_0812740C
	bl sub_08129BC4
	ldr r1, _08127400  @ =0x00001AD2
	add r0, r5, r1
	strh r4, [r0]
	ldr r0, _08127404  @ =gUnknown_02003080
	ldr r1, _08127408  @ =0x06007000
	mov r2, #252
	lsl r2, r2, #2
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081273EC:
	.4byte 0x00001AE4
_081273F0:
	.4byte 0x00001ACD
_081273F4:
	.4byte 0x00001ACE
_081273F8:
	.4byte 0x00001B05
_081273FC:
	.4byte 0x00001ADC
_08127400:
	.4byte 0x00001AD2
_08127404:
	.4byte gUnknown_02003080
_08127408:
	.4byte 0x06007000
	THUMB_FUNC_END sub_08127334

